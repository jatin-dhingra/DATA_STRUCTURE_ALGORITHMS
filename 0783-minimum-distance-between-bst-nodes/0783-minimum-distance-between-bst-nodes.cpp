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
    
    vector<int>ind{};
    void solve(TreeNode* root)
    {
        if(!root)
        {
            return;
        }
        
        solve(root->left);
        ind.push_back(root->val);
        solve(root->right);
    }
    int minDiffInBST(TreeNode* root) 
    {
        solve(root);
        int n=ind.size();
        int ans{INT_MAX};
        
        for(int i{};i<n-1;i++)
        {
            cout<<ind[i]<<" ";
            ans=min(ans,ind[i+1]-ind[i]);
        }
        
        return ans;
        
        
    }
};