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
        if(!root)
        {
            return true;
        }
        return check(root,LLONG_MIN,LLONG_MAX);
        
    }
    
    bool check(TreeNode* node,long long a,long long b)
    {
        if(node==NULL)
        {
            return true;
        }
        if(node->val>=b || node->val<=a)
        {
            return false;
        }
        return check(node->left,a,node->val) && check(node->right,node->val,b);
    }
};