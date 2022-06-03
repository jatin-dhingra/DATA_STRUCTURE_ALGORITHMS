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
        int s{};
        if(!head)
        {
            return NULL;
        }
        ListNode* start=head;
        while(start!=NULL)
        {
            start=start->next;
            s++;
        }
        int object=s-n;
        ListNode* anothernode=head;
        ListNode* removalnode=head;
        if(s==1)
        {
            return NULL;
        }
        else if(s==n)
        {
            return head->next;
        }
        else
        {
            for(int i{};i<object;i++)
            {
                removalnode=anothernode;
                anothernode=anothernode->next;
            }
            removalnode->next=anothernode->next;
            delete anothernode;
        }
        return head;
        
        
    }
};