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
    
    bool check(TreeNode* node, TreeNode* node2)
    {
        if(!node|| !node2)
        {
            return node==node2;
        }
        return (node->val==node2->val && check(node->left,node2->left) && check(node->right,node2->right));
    }
    
    bool isSubtree(TreeNode* root, TreeNode* subRoot) 
    {
        if(root==NULL &&( subRoot==NULL))
        {
            return true;
        }
        if(root==NULL && subRoot!=NULL)
        {
            return false;
        }
        
        if(check(root,subRoot))
        {
            return true;
        }
        return isSubtree(root->left,subRoot)|| isSubtree(root->right,subRoot);
        
    }
};