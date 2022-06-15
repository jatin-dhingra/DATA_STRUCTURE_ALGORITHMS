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
    int solve(TreeNode* node,int& ans)
    {
        if(node==NULL)
        {
            return 0;
        }
        
        int l=solve(node->left,ans);
        int r=solve(node->right,ans);
        ans=max(ans,l+r);
        
        return 1+max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) 
    {
        int ans{};
        
        solve(root,ans);
        return ans;
       
        
    }
};