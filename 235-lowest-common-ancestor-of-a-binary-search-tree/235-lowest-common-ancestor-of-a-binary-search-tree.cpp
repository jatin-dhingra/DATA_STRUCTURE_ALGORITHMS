/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) 
    {
        if(!root || root==p|| root==q)
        {
            return root;
        }
        int val=root->val;
        if(val>p->val && val>q->val)
        {
            return lowestCommonAncestor(root->left,p,q);
        }
        else if(val<p->val && val<q->val)
        {
            return lowestCommonAncestor(root->right,p,q);
        }
        return root;
        
    }
};