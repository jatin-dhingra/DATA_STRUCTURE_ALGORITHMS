/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node)
    {
        // 1 2 3 4 5   4
        ListNode* n=node->next;
        node->val=n->val;
        node->next=n->next;
        delete n;
        
    }
};




