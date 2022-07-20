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
    int DFS(TreeNode* node,int minn,int maxx)
    {
        if(!node)
        {
            return maxx-minn;
        }
        
        minn=min(minn,node->val);
        maxx=max(maxx,node->val);
        int l=DFS(node->left,minn,maxx);
        int r=DFS(node->right,minn,maxx);
        return max(l,r);
    }
    int maxAncestorDiff(TreeNode* root) 
    {
        if(!root)
        {
            return 0;
        }
        
        return DFS(root,root->val,root->val);   
    }
};