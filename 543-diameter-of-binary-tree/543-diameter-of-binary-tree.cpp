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
    int diameterOfBinaryTree(TreeNode* root)
    {
        
        int ans{};
        if(!root)
        {
            return ans;
        }
        solve(root,ans);
        return ans;
        
    }
    int solve(TreeNode* node,int &ans)
    {
        if(!node)
        {
            return 0;
        }
        int left=solve(node->left,ans);
        int right=solve(node->right,ans);
        ans=max(ans,left+right);
        return 1+max(left,right);
    }
};