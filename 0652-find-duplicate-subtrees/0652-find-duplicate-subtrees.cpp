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
    map<string,int>m;
    string solve(vector<TreeNode*>&ans,TreeNode* root)
    {
        if(!root)
        {
            return "";
        }
        string k=to_string(root->val)+" "+solve(ans,root->left)+" "+solve(ans,root->right);
        m[k]++;
        if(m[k]==2)
        {
            ans.push_back(root);
        }
        return k;
    }
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) 
    {
        
        vector<TreeNode*>ans;
        solve(ans,root);
        return ans;
        
    }
};