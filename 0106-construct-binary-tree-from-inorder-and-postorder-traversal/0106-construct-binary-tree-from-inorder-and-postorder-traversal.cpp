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
    unordered_map<int, int> mp;
    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int &i, int l, int r)    
    {
        if(l>r)
        {
            return NULL;
        }
        TreeNode* node = new TreeNode(postorder[i]);
        int idx = mp[postorder[i--]];
        node->right = build(inorder, postorder, i, idx+1, r);
        node->left = build(inorder, postorder, i, l, idx-1);
        return node;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
    {
        int n = inorder.size();
        for(int i=0;i<n;i++)
            mp[inorder[i]] = i;
        int i=n-1;
        return build(inorder, postorder, i, 0, n-1);
    }
};