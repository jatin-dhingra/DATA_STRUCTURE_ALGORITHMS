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
    TreeNode* solve(vector<int>&nums,int s,int e)
    {
        if(s>e)
        {
            return NULL;
        }
        int mid=s+(e-s)/2;
        TreeNode *newnode=new TreeNode(nums[mid]);
        newnode->left=solve(nums,s,mid-1);
        newnode->right=solve(nums,mid+1,e);
        return newnode;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums)
    {
        int n=nums.size();
        int s=0;
        int e=n-1;
        return solve(nums,s,e);
        
    }
};