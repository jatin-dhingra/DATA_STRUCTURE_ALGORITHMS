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
    void solve(TreeNode* root,int value,int depth,int curr)
    {
        if(!root)
        {
            return;
        }
        if(curr==depth-1)
        {
            TreeNode* node=root->left;
            root->left=new TreeNode(value);
            root->left->left=node;
            node=root->right;
            root->right=new TreeNode(value);
            root->right->right=node;
        }
        else
        {
            solve(root->left,value,depth,curr+1);
            solve(root->right,value,depth,curr+1);
        }
        
    }

    TreeNode* addOneRow(TreeNode* root, int value, int depth) 
    {
        if(!root)
        {
            return NULL;
        }
        if(depth==1)
        {
            TreeNode *nodee= new TreeNode(value);
            nodee->left=root;
            return nodee;
        }
        int curr{1};
        solve(root,value,depth,curr);
        return root;
    }
};