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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        
        q.push(root);
        int change{};
        if(root==NULL)
        {
            return ans;
        }
        while(!q.empty())
        {
            int s=q.size();
            vector<int>v;
            change=1-change;
            for(int i{};i<s;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                if(node->left!=NULL)
                {
                    q.push(node->left);
                }
                if(node->right!=NULL)
                {
                    q.push(node->right);
                }
                v.push_back(node->val);
            }
            if(!change)
            {
                reverse(v.begin(),v.end());
                ans.push_back(v);
            }
            else
            {
                ans.push_back(v);
            }
        }
        
        
        return ans;
    }
};