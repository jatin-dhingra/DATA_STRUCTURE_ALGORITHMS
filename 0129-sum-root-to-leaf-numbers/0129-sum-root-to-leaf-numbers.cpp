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
    int sumNumbers(TreeNode* root) 
    {
        if(!root)
        {
            return 0;
        }
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});
        
        int val{};
        while(!q.empty())
        {
            TreeNode* node=q.front().first;
            int sum=q.front().second;
            q.pop();
            sum*=10;
            sum+=node->val;
            if(!node->left && !node->right)
            {
                val+=sum;
                
            }
            else
            {
                if(node->left)
                {
                    q.push({node->left,sum});
                }
                if(node->right)
                {
                    q.push({node->right,sum});
                }
            }
        }
        return val;
    }
};