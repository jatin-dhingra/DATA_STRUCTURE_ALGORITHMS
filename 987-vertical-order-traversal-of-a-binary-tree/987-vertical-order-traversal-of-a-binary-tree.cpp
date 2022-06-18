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
    vector<vector<int>> verticalTraversal(TreeNode* root) 
    {
        
        map<int,map<int,multiset<int>>>treenode;
        queue<pair<TreeNode*,pair<int,int>>>node;
        
        node.push({root,{0,0}});
        
        while(!node.empty())
        {
            auto p=node.front();
            node.pop();
            TreeNode* insidenode=p.first;
            int val1=p.second.first;
            int val2=p.second.second;
            treenode[val1][val2].insert(insidenode->val);
            
            if(insidenode->left!=NULL)
            {
                node.push({insidenode->left,{val1-1,val2+1}});
            }
            if(insidenode->right!=NULL)
            {
                node.push({insidenode->right,{val1+1,val2+1}});
            }
        }
        vector<vector<int>>ans;
        for(auto i:treenode)
        {
            vector<int>level;
            for(auto j:i.second)
            {
                level.insert(level.end(),j.second.begin(),j.second.end());
            }
            ans.push_back(level);
        }
        return ans;
        
    }
};