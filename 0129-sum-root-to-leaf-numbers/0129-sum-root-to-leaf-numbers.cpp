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
  
    int ans{};
    void dfs(TreeNode* node,int sum)
    {
        if(!node){
            return;
        }
        sum*=10;
        sum+=node->val;
        if(!node->left && !node->right)
        {
            ans+=sum;
            return;
        }
        dfs(node->left,sum);
        dfs(node->right,sum);
        return;
    }
    int sumNumbers(TreeNode* root) 
    {
        if(!root)
        {
            return 0;
        }
        dfs(root,0);
    
        return ans;
        
    }
};