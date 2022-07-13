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
    void DFS(TreeNode* root,vector<int>&ans)
    {
        if(!root)
        {
            return;
        }
        DFS(root->left,ans);
        ans.push_back(root->val);
        DFS(root->right,ans);
    }
    int kthSmallest(TreeNode* root, int k) 
    {
        vector<int>ans;
        DFS(root,ans);
        return ans[k-1];
        
    }
};