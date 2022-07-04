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
    
    void DFS(Node* node,vector<int>&ans)
    {
        
        for(Node* x:node->children)
        {
            DFS(x,ans);
        }
        ans.push_back(node->val);
    }
    vector<int> postorder(Node* root) 
    {
        vector<int>ans;
        if(!root)
        {
            return ans;
        }
        DFS(root,ans);
        return ans;
        
    }
};