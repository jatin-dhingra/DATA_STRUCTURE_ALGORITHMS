#include <bits/stdc++.h>
using namespace std;
struct Node
{
  int data{};
  struct Node* left;
  struct Node* right;
};

struct Node* newnode(int data)
{
  struct Node* Node= new struct Node;
  Node->data=data;
  Node->left=NULL;
  Node->right=NULL;
  return (Node);
}

void preorder(TreeNode* node,vector<int>ans)
{
  if(node==NULL){
    return;
  }
  ans.push_back(node->data);
  preorder(node->left,ans);
  preorder(node->right,ans);

}


int children(TreeNode* root)
{
  if(root==NULL){
    return;
  }
  int child{};
  if(root->left){
    child+=root->left;
  }
  if(root->right){
    child+=root->right;
  }
  if(child>=root->data)
  {
    root->data=child;
  }
  else
  {
    if(root->left)
    {
      root->left->data=root->data;
    }
    else if(root->right)
    {
      root->right->data=root->data;
    }
  }
  children(root->left);
  children(root->right);
  int total{};
  if(root->left)
  {
    total+=root->left->data;
  }
  if(root->right)
  {
    total+=root->right->data;
  }
  if(root->left || root->right)
  {
    root->data=total;
  }

}


int main()
{
  struct Node* root= newnode(1);
  root->left=newnode(2);
  root->right=newnode(7);
  root->left->left=newnode(3);
  root->left->right=newnode(4);
  root->left->left->left=newnode(5);
  root->left->left->right=newnode(9);
  children(root);
  vector<int>ans;
  preorder(root,ans);
  for(auto i:ans)
  {
    cout<<i<<" ";
  }
  cout<<endl;


}
