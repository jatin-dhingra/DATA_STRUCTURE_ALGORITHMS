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
        if(head==NULL)
        {
            return NULL;
        }
        if(head->next==NULL)
        {
            return NULL;
        }
        int len{};
        ListNode* dum=head;
        while(dum!=NULL)
        {
            len++;
            dum=dum->next;
        }
        if(len==n)
        {
            return head->next;
        }
       int remlen=len-n;
        ListNode* curr=head;
        for(int i{};i<remlen-1;i++)
        {
            curr=curr->next;
        }
        curr->next=curr->next->next;
        return head;
       // return dum;
        
        
    }
};