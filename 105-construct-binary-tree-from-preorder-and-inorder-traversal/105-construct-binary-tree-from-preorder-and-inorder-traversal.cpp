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
        int n=inorder.size();
        for(int i{};i<n;i++)
        {
            m[inorder[i]]=i;
        }
        
        TreeNode* node=build(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,m);
        return node;
    }
    
    TreeNode* build(vector<int>&preorder,int prestart,int prend,vector<int>&inorder,int instart,int inend,map<int,int>&m)
    {
        if(prestart>prend|| instart>inend)
        {
            return NULL;
        }
        
        TreeNode* node=new TreeNode(preorder[prestart]);
        int curr=m[node->val];
        int numleft=curr-instart;
        
        node->left=build(preorder,prestart+1,prestart+numleft,inorder,instart,curr-1,m);
        node->right=build(preorder,prestart+numleft+1,prend,inorder,curr+1,inend,m);
        
        return node;
    }
};