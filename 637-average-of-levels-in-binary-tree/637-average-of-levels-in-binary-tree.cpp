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
        vector<double>ans;
        double val{};
        
        if(!root)
        {
            return ans;
        }
        
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>vec;
        while(!q.empty())
        {
          
            vector<int>v;
            int s=q.size();
            for(int i{};i<s;i++)
            {
                TreeNode* node=q.front();
                v.push_back(node->val);
                q.pop();
                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
            }
            vec.push_back(v);
        }
        cout<<fixed<<setprecision(5);
        for(auto i:vec)
        {
           double summ=accumulate(i.begin(),i.end(),0.0);
            ans.push_back(summ/(i.size())*1.0);
        }
        return ans;
    }
    
};