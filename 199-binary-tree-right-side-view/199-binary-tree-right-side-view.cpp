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
    
    void DFS(TreeNode* node,int count,vector<int>&ans)
    {
        if(!node)
        {
            return ;
            
        }
        if(ans.size()==count)
        {
            ans.push_back(node->val);
        }
        DFS(node->right,count+1,ans);
        DFS(node->left,count+1,ans);
    }
    
    vector<int> rightSideView(TreeNode* root) 
    {
        
        vector<int>ans;
        int count{};
        DFS(root,count,ans);
        return ans;
        
    }
};