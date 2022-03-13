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
    ListNode *detectCycle(ListNode *head)
    {
        ListNode* slow=head;
        ListNode* fast=head;
        if(!head)
        {
            return NULL;
        }
        do
        {
            slow=slow->next;
            if(!slow)
            {
                break;
            }
            fast=fast->next;
            if(!fast)
            {
                break;
            }
            fast=fast->next;
            if(!fast)
            {
                break;
            }
            
            
        }while(slow!=fast);
        if(!slow|| !fast)
        {
            return NULL;
        }
        fast=head;
        while(slow!=fast)
        {
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
};