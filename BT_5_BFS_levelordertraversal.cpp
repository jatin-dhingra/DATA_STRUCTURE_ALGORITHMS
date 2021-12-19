#include <bits/stdc++.h>
using namespace std;
struct Node{
  int data{};
  struct Node* left;
  struct Node* right;
  Node(int val)
  {
    val=data;
    left=right=NULL;
  }
};

void levelorder(Node* root)
{
  if(root==NULL)
  {
    return;
  }
  queue<Node*>q;
  q.push(root);
  while(q.empty()==false)
  {
    Node* node= q.front();
    cout<<node->data<<" ";
    q.pop();
    if(node->left!=NULL){
      q.push(node->left);
    }
    if(node->right!=NULL)
    {
      q.push(node->right);
    }
  }
}

int main()
{
  struct Node *root=new Node(5);
    root->left=new Node(6);
    root->right=new Node(8);
    root->left->right=new Node(2);
    root->left->left=new Node(3);
    root->right->right=new Node(7);
    levelorder(root);
}
