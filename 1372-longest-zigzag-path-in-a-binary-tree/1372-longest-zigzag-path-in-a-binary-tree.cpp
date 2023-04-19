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
    void rec(TreeNode* root,bool turn,int count)
    {
        if(!root)
        {
            return;
        }
        ans=max(ans,count);
        if(turn)
        {
            rec(root->right,false,count+1);
            rec(root->left,true,1);
        }
        else
        {
            rec(root->left,true,count+1);
            rec(root->right,false,1);
        }
    }
    int longestZigZag(TreeNode* root) 
    {
        rec(root,true,0);
        rec(root,false,0);
        return ans;
        
    }
};