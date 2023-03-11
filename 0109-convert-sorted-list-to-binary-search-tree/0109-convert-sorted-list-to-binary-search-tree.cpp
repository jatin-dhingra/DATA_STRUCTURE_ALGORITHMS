/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    ListNode* node{};
    TreeNode* solve(int left,int right)
    {
        if(left>right)
        {
            return NULL;
        }
        int mid=(left+right)/2;
        TreeNode* Tnode=new TreeNode();
        Tnode->left=solve(left,mid-1);
        Tnode->val=node->val;
        node=node->next;
        Tnode->right=solve(mid+1,right);
        return Tnode;
    }
    TreeNode* sortedListToBST(ListNode* head) {
        int len{};
        node=head;
        while(node)
        {
            node=node->next;
            len++;
        }
        node=head;
        return solve(1,len);
    }
};