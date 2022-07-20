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
    vector<int> rightSideView(TreeNode* root) 
    {
        vector<int>ans;
        if(!root)
        {
            return  ans;
        }
        vector<vector<int>>v;
        queue<TreeNode*>q;
        q.push(root);
        
        while(!q.empty())
        {
            int n=q.size();
            vector<int>vec;
            for(int i{};i<n;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                vec.push_back(node->val);
                if(node->left!=NULL)
                {
                    q.push(node->left);
                }
                if(node->right!=NULL)
                {
                    q.push(node->right);
                }
            }
            v.push_back(vec);
        }
        for(int i{};i<v.size();i++)
        {
            int k=v[i].size();
            ans.push_back(v[i][k-1]);
        }
        return ans;
    }
};