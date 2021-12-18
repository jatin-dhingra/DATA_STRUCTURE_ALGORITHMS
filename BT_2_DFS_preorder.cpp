class Solution {
public:
    
    void dfs(TreeNode* node,vector<int>&order)
    {
        if(node==NULL)
        {
            return;
        }
        
        order.push_back(node->val);
        dfs(node->left,order);
        dfs(node->right,order);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int>order;
        dfs(root,order);
        return order;
        
    }
};
