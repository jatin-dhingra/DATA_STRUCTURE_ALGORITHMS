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
    int solve(TreeNode* root,int node)
    {
        if(!root)
        {
            return 0;
        }
        int count{};
        if(root->val>=node)
        {
            count++;
            node=root->val;
            
        }
        int left=solve(root->left,node);
        int right=solve(root->right,node); 
        return count+left+right;
    }
    int goodNodes(TreeNode* root) 
    {
        if(!root)
        {
            return 0;
        }
        return solve(root,root->val);
        
    }
};