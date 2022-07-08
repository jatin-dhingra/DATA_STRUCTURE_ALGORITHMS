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
    ListNode* oddEvenList(ListNode* head) 
    {
        vector<int>odd,even;
        ListNode* dum=head;
        if(!head)
        {
            return NULL;
        }
        int i{1};
        while(dum)
        {
            if((i)&1)
            {
                odd.push_back(dum->val);
            }
            else
            {
                even.push_back(dum->val);
            }
            dum=dum->next;
            i++;
        }
        
        ListNode* start=new ListNode(NULL);
        ListNode* header=start;
        for(int i{};i<odd.size();i++)
        {
            ListNode* node=new ListNode(odd[i]);
            start->next=node;
            start=start->next;
        }
        
        for(int i{};i<even.size();i++)
        {
            ListNode* node=new ListNode(even[i]);
            start->next=node;
            start=start->next;
        }
        return header->next;
        
    }
};