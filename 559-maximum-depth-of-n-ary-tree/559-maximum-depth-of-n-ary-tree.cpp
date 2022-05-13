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
    int maxDepth(Node* root) 
    {
        //int ans{};
        if(!root)
        {
            return 0;
        }
        int ans{1};
        for(int i{};i<root->children.size();i++)
        {
            ans=max(ans,maxDepth(root->children[i])+1);
        }
        return ans;
        
    }
};