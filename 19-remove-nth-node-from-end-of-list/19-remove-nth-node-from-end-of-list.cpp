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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        int len{};
        ListNode* node=head;
        while(node)
        {
            len++;
            node=node->next;
        }
        int left=len-n;
        if(left==0)
        {
            return head->next;
        }
        ListNode* curr=head;
        ListNode* temp=head;
        left--;
        while(left)
        {
           
            curr=curr->next;
            temp=temp->next;
            left--;
            
        }
        
        curr->next=temp->next->next;
        
        return head;
    }
};