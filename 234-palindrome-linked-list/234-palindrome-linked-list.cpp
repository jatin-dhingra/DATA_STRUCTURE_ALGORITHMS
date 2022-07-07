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
    
    ListNode* reverse(ListNode* node)
    {
        ListNode* start=NULL;
        while(node)
        {
            ListNode* newhead=node->next;
            node->next=start;
            start=node;
            node=newhead;
        }
        return start;
    }
    
    bool isPalindrome(ListNode* head) 
    {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        slow->next=reverse(slow->next);
        slow=slow->next;
        ListNode* dum=head;
        while(slow)
        {
            if(head->val!=slow->val)
            {
                return false;
            }
            slow=slow->next;
            head=head->next;
        }
        return true;
    }
};