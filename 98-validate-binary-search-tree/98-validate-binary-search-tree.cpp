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
    bool isValidBST(TreeNode* root) 
    {
        return check(root,LONG_MIN,LONG_MAX);    
    }
    bool check(TreeNode* root,long a,long b)
    {
        if(!root)
        {
            return 1;
        }
        if(root->val<=a || root->val>=b)
        {
            return 0;
        }
        return check(root->left,a,root->val)&& check(root->right,root->val,b);
    }
};