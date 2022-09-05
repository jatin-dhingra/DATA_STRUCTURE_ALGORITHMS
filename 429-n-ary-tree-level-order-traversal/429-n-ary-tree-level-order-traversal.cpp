/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) 
    {
        vector<vector<int>>v;
        queue<Node*>q;
        if(!root)
        {
            return v;
        }
        
        q.push(root);
        
        while(!q.empty())
        {
            vector<int>ans;
            int k=q.size();
            for(int i{};i<k;i++)
            {
                Node* node=q.front();
                q.pop();
                for(Node* child:node->children)
                {
                    q.push(child);
                }
                ans.push_back(node->val);
            }
            v.push_back(ans);
        }
        return v;
    }
};