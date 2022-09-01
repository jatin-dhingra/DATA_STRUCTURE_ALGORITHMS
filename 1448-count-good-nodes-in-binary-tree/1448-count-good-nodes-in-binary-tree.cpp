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
    int solve(TreeNode* root,int val)
    {
        if(!root)
        {
            return 0;
        }
        int count{};
        if(root->val>=val)
        {
            count++;
            val=root->val;
        }
       
        return count+solve(root->right,val)+solve(root->left,val);
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