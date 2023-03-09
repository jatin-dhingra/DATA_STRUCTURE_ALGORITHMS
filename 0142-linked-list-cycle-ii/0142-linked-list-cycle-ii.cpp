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
    ListNode *detectCycle(ListNode *head) {
        if(!head || !head->next)
        {
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* dum=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                while(slow!=dum)
                {
                    dum=dum->next;
                    slow=slow->next;
                }
                return dum;
            }
        }
        return NULL;
    }
};