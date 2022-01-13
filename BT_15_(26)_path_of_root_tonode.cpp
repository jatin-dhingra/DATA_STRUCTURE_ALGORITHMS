#include <bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  struct Node* left;
  struct Node* right;
  Node(int val)
  {
    data=val;
    left=NULL;
    right=NULL;
  }
};

bool find(Node* root,int d,vector<int>&ans)
{
  if(!root){
    return false;
  }
  ans.push_back(root->data);
  if(root->data==d)
  {
    return true;
  }
  if(find(root->left,5,ans)||find(root->right,5,ans))
  {
    return true;
  }
  ans.pop_back();
  return false;

}

int main()
{
  struct Node* root= new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right=new Node(8);
    root->left->right->left = new Node(5);
    vector<int>ans;
  find(root,5,ans);
  for(auto i:ans)
  {
    cout<<i<<" ";
  }


}
