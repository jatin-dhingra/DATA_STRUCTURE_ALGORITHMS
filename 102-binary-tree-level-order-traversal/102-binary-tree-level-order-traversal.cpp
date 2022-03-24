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
            int k=q.size();
            vector<int>vec;
            for(int i{};i<k;i++)
            {
                TreeNode* va=q.front();
                q.pop();
                if(va->left!=NULL)
                {
                    q.push(va->left);
                }
                if(va->right!=NULL)
                {
                    q.push(va->right);
                }
                vec.push_back(va->val);
            }
            ans.push_back(vec);
        }
        return ans;
        
    }
};