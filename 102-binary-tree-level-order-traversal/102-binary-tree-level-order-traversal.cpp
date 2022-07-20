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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        q.push(root);
        if(!root)
        {
            return ans;
        }
        while(!q.empty())
        {
            int n=q.size();
            vector<int>v;
            for(int i{};i<n;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                v.push_back(node->val);
                if(node->left!=NULL)
                {
                    q.push(node->left);
                }
                if(node->right!=NULL)
                {
                    q.push(node->right);
                }
            }
            ans.push_back(v);
        }
        return ans;
        
    }
};