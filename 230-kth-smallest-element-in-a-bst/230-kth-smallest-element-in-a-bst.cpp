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
    void DFS(vector<int>&ans,TreeNode* node)
    {
        if(node==NULL)
        {
            return;
        }
        DFS(ans,node->left);
        ans.push_back(node->val);
        DFS(ans,node->right);
    }
    int kthSmallest(TreeNode* root, int k) 
    {
        vector<int>ans;
        DFS(ans,root);
        return ans[k-1];
        
        
    }
};