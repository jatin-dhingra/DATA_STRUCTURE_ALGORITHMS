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
    ListNode* middleNode(ListNode* head) 
    {
        if(!head)
        {
            return NULL;
        }
        ListNode* one=head;
        ListNode* two=head;
        while(one!=NULL && one->next!=NULL)
        {
            one=one->next->next;
            two=two->next;
        }
        return two;
        
    }
};