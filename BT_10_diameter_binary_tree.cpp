class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        height(root,d);
        return d;
        
    }
    int height(TreeNode *root,int& d)
    {
        if(root==NULL)
        {
            return 0;
        }
        int left=height(root->left,d);
        int right=height(root->right,d);
        d=max(d,left+right);
        
        return 1+max(left,right);
    }
};
