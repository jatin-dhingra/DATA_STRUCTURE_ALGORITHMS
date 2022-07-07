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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        ListNode* curr=new ListNode(0);
        ListNode* newhead=curr;
        
        while(list1 && list2)
        {
            if(list1->val>list2->val)
            {
                newhead->next=list2;
                list2=list2->next;
            }
            else
            {
                newhead->next=list1;
                list1=list1->next;
            }
            newhead=newhead->next;
        }
        if(list1 )
        {
            newhead->next=list1;
            list1=list1->next;
            
        }
        if(list2 )
        {
            newhead->next=list2;
            list2=list2->next;
        }
        return curr->next;
        
    }
};