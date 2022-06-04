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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        ListNode* one=headA;
        ListNode* two=headB;
        int check{};
        while(one!=two)
        {
            if(one==NULL)
            {
                one=headB;
            }
            else
            {
                one=one->next;
            }
            if(two==NULL)
            {
                two=headA;
            }
            else
            {
                two=two->next;
            }
            if(one==NULL && two==NULL)
            {
                check=1;
                break;
            }
            else if(one==two)
            {
                break;
            }
        }
        if(check)
        {
            return NULL;
        }
        return one;
        
        
    }
};