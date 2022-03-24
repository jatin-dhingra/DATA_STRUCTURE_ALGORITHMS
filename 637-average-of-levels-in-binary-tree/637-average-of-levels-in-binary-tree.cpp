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
    vector<double> averageOfLevels(TreeNode* root) 
    {
        vector<double>mainans;
        
         queue<TreeNode*>q;
        vector<vector<int>>ans;
        q.push(root);
        if(root==NULL)
        {
            return mainans;
        }
        
        while(!q.empty())
        {
            int si=q.size();
            vector<int>v;
            for(int i{};i<si;i++)
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
            ans.push_back(v);
        }
        int val1{};
        
        for(int i{};i<ans.size();i++)
        {
            double sum{},pushingval{};
            for(int j{};j<ans[i].size();j++)
            {
                sum+=ans[i][j];
            }
            pushingval=sum/ans[i].size();
            mainans.push_back(pushingval);
        }
        return mainans;
        
    }
};