#include<bits/stdc++.h>
using namespace std;

vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    vector<int>ans;
    if(!root)
    {
        return ans;
    }
    map<int,int>m;
    queue<pair<TreeNode*,int>>node;
    node.push({root,0});
    
    while(!node.empty())
    {
        auto q=node.front();
        node.pop();
        TreeNode* element=q.first;
        int index=q.second;
        
        if(m.find(index)==m.end())
        {
            m[index]=element->val;
        }
        if(element->left!=NULL)
        {
            node.push({element->left,index-1});
        }
        if(element->right!=NULL)
        {
            node->push({element->right,index+1});
        }
    }
    
    for(auto i:m)
    {
        ans.push_back(i.second->val);
    }
    return ans;
    
}
