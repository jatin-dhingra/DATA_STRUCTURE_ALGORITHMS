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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root)
    {
        vector<vector<int>>ans;
        
        if(root==NULL)
        {
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        bool cond=true;
        
        while(!q.empty())
        {
            int s=q.size();
            vector<int>v(s);
            for(int i{};i<s;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                int ind=cond?i:s-i-1;
                v[ind]=node->val;
                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
            }
            cond=!cond;
            ans.push_back(v);
        }
        return ans;
    }
};