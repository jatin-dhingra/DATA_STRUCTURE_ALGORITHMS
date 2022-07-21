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
    void DFS(TreeNode* node,vector<int>&ans,int len)
    {
        if(!node)
        {
            return;
        }
        if(ans.size()==len)
        {
            ans.push_back(node->val);
            
        }
        
        DFS(node->right,ans,len+1);
        DFS(node->left,ans,len+1);
    }
    
    vector<int> rightSideView(TreeNode* root) 
    {
        vector<int>ans;
        if(!root)
        {
            return ans;
        }
        DFS(root,ans,0);
        return ans;
        
    }
};