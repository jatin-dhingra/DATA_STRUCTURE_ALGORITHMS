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
        if(!root)
        {
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        int roll{};
        while(!q.empty())
        {
            int s=q.size();
            vector<int>vec;
            roll=1-roll;
            for(int i{};i<s;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                vec.push_back(node->val);
                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
                
            }
            if(!roll)
            {
                reverse(vec.begin(),vec.end());
                ans.push_back(vec);
            }
            else
            {
                ans.push_back(vec);
            }
            
        
        }
        return ans;
    }
};