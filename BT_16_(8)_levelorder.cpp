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


void inorder(Node* node)
{
    queue<Node*>q;
    vector<vector<int>>v;
    if(node==NULL)
    {
      return;
    }
    q.push(node);
    while(!q.empty())
    {
      int s=q.size();
      vector<int>val;
      for(int i{};i<s;i++)
      {
        Node* nn=q.front();
        q.pop();
        if(nn->left!=NULL)
        {
          q.push(nn->left);
        }
        if(nn->right!=NULL)
        {
          q.push(nn->right);
        }
        val.push_back(nn->data);
      }
      v.push_back(val);
    }

    for(auto i:v){
      for(auto j:i){
        cout<<j<<" ";
      }cout<<endl;
    }
}


int main()
{
  struct Node* root= newnode(1);
  root->left=newnode(2);
  root->right=newnode(7);
  root->left->left=newnode(3);
  root->left->right=newnode(4);
  inorder(root);


}
