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
    void dfs(vector<int>&v,TreeNode* root)
    {
        if(!root)
        {
            return;
        }
        dfs(v,root->left);
        v.push_back(root->val);
        dfs(v,root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int>v;
        if(!root)
        {
            return v;
        }
        dfs(v,root);
        return v;
        
    }
};