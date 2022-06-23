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
    TreeNode* deleteNode(TreeNode* root, int key) 
    {
        
        if(root==NULL)
        {
            return NULL;
        }
        if(root->val==key)
        {
            return somefunction(root);
                
        }
        TreeNode* curr=root;
        while(root!=NULL)
        {
            if(root->val>key)
            {
                if(root->left!=NULL && root->left->val==key)
                {
                    root->left=somefunction(root->left);
                }
                else
                {
                    root=root->left;
                }
            }
            else
            {
                if(root->right!=NULL && root->right->val==key)
                {
                    root->right=somefunction(root->right);
                }
                else
                {
                    root=root->right;
                }
            }
        }
        return curr;
    }
    
    TreeNode* somefunction(TreeNode* node)
    {
        if(node->left==NULL)
        {
            return node->right;
        }
        if(node->right==NULL)
        {
            return node->left;
        }
        TreeNode* currentnoderight=node->right;
        TreeNode* extremeleftright=findit(node->left);
        extremeleftright->right=currentnoderight;
        return node->left;
    }
    TreeNode* findit(TreeNode* node)
    {
        if(node->right==NULL)
        {
            return node;
        }
        return findit(node->right);
    }
};