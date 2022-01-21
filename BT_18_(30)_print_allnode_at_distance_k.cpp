/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void makeparent(unordered_map<TreeNode*, TreeNode*>&parents,TreeNode* root, TreeNode* target)
    {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();
            if(node->left)
            {
                parents[node->left]=node;
                q.push(node->left);
            }
            if(node->right)
            {
                parents[node->right]=node;
                q.push(node->right);
            }
        }
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k)
    {
        unordered_map<TreeNode* ,TreeNode*>parents;
        makeparent(parents,root,target);
        unordered_map<TreeNode*,bool>isvisited;
        queue<TreeNode*>q;
        q.push(target);
        isvisited[target]=true;
        int check{};
        while(!q.empty())
        {
            int s=q.size();
            if(check==k)
            {
                break;
            }
            check++;
            for(int i{};i<s;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                if(node->left && !isvisited[node->left])
                {
                    q.push(node->left);
                    isvisited[node->left]=true;
                }
                if(node->right && !isvisited[node->right])
                {
                    q.push(node->right);
                    isvisited[node->right]=true;
                }
                if(parents[node] && !isvisited[parents[node]])
                {
                    q.push(parents[node]);
                    isvisited[parents[node]]=true;
                }
            }
        }
        vector<int>ans;
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();
            ans.push_back(node->val);
        }
        return ans;

    }
};
