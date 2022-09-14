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
    map<int,int>m;
    int count{};
    void dfs(TreeNode* node)
    {
        if(!node)
        {
            return ;
        }
        
        if(!node->left && !node->right)
        {
            m[node->val]++;
            int ans{};
            for(auto i:m)
            {
                if(i.second%2==1)
                {
                    ans++;
                }
            }
            if(ans<=1)
            {
                count++;
            }
            m[node->val]--;
            return;
            
        }
        m[node->val]++;
        dfs(node->left);
        dfs(node->right);
        m[node->val]--;
    }
    int pseudoPalindromicPaths (TreeNode* root) 
    {
        vector<int>v;
        dfs(root);
        return count;
        
    }
};