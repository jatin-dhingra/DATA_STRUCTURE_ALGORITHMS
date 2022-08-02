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
class Solution {
public:
    void dfs(TreeNode* root,vector<int>&vis)
    {
        if(!root)
        {
            return;
        }
        dfs(root->left,vis);
        vis.push_back(root->val);
        dfs(root->right,vis);
    }
    bool checkTree(TreeNode* root) 
    {
        vector<int>vis;
        dfs(root,vis);
        return (vis[0]+vis[2]==vis[1]);
        
    }
};