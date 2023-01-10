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
    void dfs(TreeNode* p,vector<int>&v)
    {
        if(!p)
        {
            v.push_back(0);
            return;
        }
        v.push_back(p->val);
        dfs(p->left,v);
        dfs(p->right,v);
    }
    void dfs1(TreeNode* q,vector<int>&u)
    {
        if(!q)
        {
            u.push_back(0);
            return;
        }
        u.push_back(q->val);
        dfs(q->left,u);
        dfs(q->right,u);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        vector<int>v,u;
        dfs(p,v);
        dfs1(q,u);
        return v==u;
        
    }
};