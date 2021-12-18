#include <bits/stdc++.h>
using namespace std;
struct Node
{
  int data{};
  struct Node *left;
  struct Node *right;
  Node(int val)
  {
    val=data;
    left=right=NULL;
  }

};

int main()
{
  struct Node *root=new Node(5);
  root->left=new Node(6);
  root->right=new Node(8);
  root->left->right=new Node(2);
}
