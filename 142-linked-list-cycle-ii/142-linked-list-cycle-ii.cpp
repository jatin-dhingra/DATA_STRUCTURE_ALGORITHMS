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
        
        if(!head || !(head->next))
        {
            return NULL;
        }
        
       
        
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* dum=head;
        while(fast->next!=NULL  && fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                while(slow!=dum)
                {
                    slow=slow->next;
                    dum=dum->next;
                }
                return slow;
            }
        }
        return NULL;
        
    }
};