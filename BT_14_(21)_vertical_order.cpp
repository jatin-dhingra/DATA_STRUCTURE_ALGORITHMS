/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution
{
public:
  vector<vector<int>> verticalTraversal(TreeNode* root)
  {
    map<int,map<int,multiset<int>>>m;
     queue<pair<TreeNode*, pair<int, int>>> q;
    q.push({root, {0, 0}});
    while(!q.empty())
    {
      auto node1=q.front();
      q.pop();
      TreeNode* node=node1.first;
      int x=node1.second.first;
      int y=node1.second.second;
      m[x][y].insert(node->val);
      if(node->left!=NULL){
        q.push({node->left,{x-1,y+1}});
      }
      if(node->right!=NULL){
        q.push({node->right,{x+1,y+1}});
      }
    }
    vector<vector<int>>ans;
    for(auto i:m)
    {
      vector<int>column;
      for(auto j:i.second)
      {
        column.insert(column.end(),j.second.begin(),j.second.end());
      }
        ans.push_back(column);
    }
    return ans;
  }
};/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution
{
public:
  vector<vector<int>> verticalTraversal(TreeNode* root)
  {
    map<int,map<int,multiset<int>>>m;
     queue<pair<TreeNode*, pair<int, int>>> q;
    q.push({root, {0, 0}});
    while(!q.empty())
    {
      auto node1=q.front();
      q.pop();
      TreeNode* node=node1.first;
      int x=node1.second.first;
      int y=node1.second.second;
      m[x][y].insert(node->val);
      if(node->left!=NULL){
        q.push({node->left,{x-1,y+1}});
      }
      if(node->right!=NULL){
        q.push({node->right,{x+1,y+1}});
      }
    }
    vector<vector<int>>ans;
    for(auto i:m)
    {
      vector<int>column;
      for(auto j:i.second)
      {
        column.insert(column.end(),j.second.begin(),j.second.end());
      }
        ans.push_back(column);
    }
    return ans;
  }
};
