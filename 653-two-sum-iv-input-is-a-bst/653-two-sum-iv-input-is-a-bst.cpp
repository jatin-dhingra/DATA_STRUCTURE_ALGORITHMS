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
    unordered_map<int,int>m;
    bool solve(TreeNode* root,int k)
    {
        if(!root)
        {
            return 0;
        }
        if(m.find(k-root->val)!=m.end())
        {
            return 1;
        }
        m[root->val]=1;
        return solve(root->left,k)||solve(root->right,k);
        
    }
    bool findTarget(TreeNode* root, int k) 
    {
        if(!root)
        {
            return false;
        }
        return solve(root,k);
        
    }
};