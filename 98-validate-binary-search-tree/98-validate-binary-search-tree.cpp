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
        return check(LLONG_MIN,LLONG_MAX,root);
    }
    bool check(long long a,long long b,TreeNode* node)
    {
        if(node==NULL)
        {
            return true;
        }
        if(node->val<=a || node->val>=b)
        {
            return false;
        }
        return check(a,node->val,node->left)&& check(node->val,b,node->right);
            
        
    }
};