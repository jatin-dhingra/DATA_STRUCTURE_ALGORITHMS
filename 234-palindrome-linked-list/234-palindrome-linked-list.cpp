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
    
    ListNode* reverse(ListNode* head)
    {
        ListNode* start= NULL;
        while(head!=NULL)
        {
            ListNode* newhead=head->next;
            head->next=start;
            start=head;
            head=newhead;
        }
        return start;
        
    }
    
    bool isPalindrome(ListNode* head) 
    {
        if(!head || head->next==NULL)
        {
            return true;
        }
        
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL &&  fast->next->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* midnode=slow;
        
        slow->next=reverse(slow->next);
        slow=slow->next;
        ListNode* dum=head;
        while(slow!=NULL)
        {
            if(slow->val!=dum->val)
            {
                return false;
            }
            dum=dum->next;
            slow=slow->next;
        }
        return true;
        
    }
};