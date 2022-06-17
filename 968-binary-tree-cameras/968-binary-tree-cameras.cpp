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
    int cam;
    int helper(TreeNode*root,TreeNode*r){
        if(!root) return 0;
        int a=helper(root->left,r);
        int b=helper(root->right,r);
        if(a==0 and b==0) {
            if(root==r){
                 cam++;
                return 1;
            }
            return -1;
        }
        if(a==-1 || b==-1) {
            cam++;
            return 1;
        }
        return 0;
        
        
    }
    int minCameraCover(TreeNode* root) {
        cam=0;
        helper(root,root);
        return cam;
    }
};