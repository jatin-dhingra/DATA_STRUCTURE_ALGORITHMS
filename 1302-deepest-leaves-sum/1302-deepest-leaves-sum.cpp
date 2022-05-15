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
    int deepestLeavesSum(TreeNode* root) 
    {
        if(!root)
        {
            return 0;
        }
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            vector<int>v;
            for(int i{};i<s;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
                v.push_back(node->val);
            }
            ans.push_back(v);
        }
        
        vector<int>mainans=ans[ans.size()-1];
        int sum=accumulate(mainans.begin(),mainans.end(),0);
        return sum;
      
    }
};