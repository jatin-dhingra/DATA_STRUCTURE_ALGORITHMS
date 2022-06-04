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
    bool hasCycle(ListNode *head) 
    {
       if(!head)
        {
            return NULL;
        }
        ListNode* one=head;
        ListNode* two=head;
        while(two->next!=NULL && two->next->next!=NULL)
        {
            one=one->next;
            two=two->next->next;
            if(one==two)
            {
                return true;
            }
        }
        return false;
        
    }
};