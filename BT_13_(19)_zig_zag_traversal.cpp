class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>v;
        queue<TreeNode*>q;
        if(root==NULL)
        {
            return v;
        }
        bool leftright=true;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            vector<int>v2(s);
            for(int i{};i<s;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                int index=(leftright) ? i:(s-i-1);
                v2[index]=node->val;
                if(node->left!=NULL)
                {
                    q.push(node->left);
                }
                if(node->right!=NULL)
                {
                    q.push(node->right);
                }
            }
            leftright=!leftright;
            v.push_back(v2);

        }
        return v;

    }
};
