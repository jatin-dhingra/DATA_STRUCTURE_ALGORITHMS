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

void preorder_iterative(Node* root)
{
  vector<int>v;
  if(root==NULL)
  {
    cout<<0<<endl;
  }
  stack<Node*>st;
  st.push(root);
  while(!st.empty())
  {
    root=st.top();
    st.pop();
    v.push_back(root->data);
    if(root->right!=NULL)
    {
      st.push(root->right);
    }
    if(root->left!=NULL){
      st.push(root->left);
    }
  }
  for(auto i:v){
    cout<<i<<" ";
  }
}

int main()
{
  struct Node* root= newnode(1);
  root->left=newnode(2);
  root->right=newnode(7);
  root->left->left=newnode(3);
  root->left->right=newnode(4);
  preorder_iterative(root);


}
