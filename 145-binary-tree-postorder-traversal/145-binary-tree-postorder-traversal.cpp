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
    vector<int> postorderTraversal(TreeNode* root) 
    {
        stack<TreeNode*>st;
        stack<TreeNode*>st2;
        st.push(root);
        vector<int>ans;
        if(root==NULL)
        {
            return ans;
        }
        
        while(!st.empty())
        {
            TreeNode* node=st.top();
            st.pop();
            st2.push(node);
            if(node->left!=NULL)
            {
                st.push(node->left);
            }
            if(node->right!=NULL)
            {
                st.push(node->right);
            }
            
            
        }
        while(!st2.empty())
        {
            int val=st2.top()->val;
            ans.push_back(val);
            st2.pop();

        }
        return ans;
    }
};