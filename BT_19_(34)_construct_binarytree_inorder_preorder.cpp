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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) 
    {
        map<int,int>m;
        for(int i{};i<inorder.size();i++)
        {
            m[inorder[i]]=i;
        }
        TreeNode *root=newtree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,m);
        return root;
        
    }
    
    TreeNode* newtree(vector<int>&preorder,int prestart,int preend,vector<int>&inorder,int instart,int inend, map<int,int>&m)
    {
        if(prestart>preend || instart>inend)
        {
            return NULL;
        }
        TreeNode* root=new TreeNode(preorder[prestart]);
        int inroot=m[root->val];
        int leftside=inroot-instart;
        
        root->left=newtree(preorder,prestart+1,prestart+leftside,inorder,instart,inroot-1,m);
        root->right=newtree(preorder,prestart+1+leftside,preend,inorder,inroot+1,inend,m);
        return root;
    }
};
