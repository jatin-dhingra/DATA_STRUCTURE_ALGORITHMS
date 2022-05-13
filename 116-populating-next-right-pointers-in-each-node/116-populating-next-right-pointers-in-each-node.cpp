/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) 
    {
        if(!root)
        {
            return NULL;
        }
        
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            Node* var=NULL;
            for(int i{};i<s;i++)
            {
               Node* topnode=q.front();
                
                q.pop();
                if(var!=NULL)
                {
                    var->next=topnode;
                }
                if(topnode->left!=NULL)
                {
                    q.push(topnode->left);
                }
                if(topnode->right!=NULL)
                {
                    q.push(topnode->right);
                }
                var=topnode;
            }
        }
        return root;
    }
};