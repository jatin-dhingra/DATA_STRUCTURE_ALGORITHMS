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

void inorder_traversal(node* root)
{
  vector<int>v;
  stack<int>st;
  node* node=root;
  while(true)
  {
    if(node!=NULL)
    {
      st.push(node);
      node=node->left;
    }
    else{
      if(st.empty() ==true )
        break;
      node=st.top();
      st.pop();
      v.push_back(node->data)
      node=node->right;
    }
  }
  for(auto i:v)
  {
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
  inorder_traveral(root);

}
