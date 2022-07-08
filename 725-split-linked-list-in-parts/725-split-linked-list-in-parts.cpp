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
    vector<ListNode*> splitListToParts(ListNode* head, int k) 
    {
        ListNode* x=head;
        int n{};
        vector<ListNode*>ans(k);
        while(x)
        {
            x=x->next;
            n++;
        }
        ListNode* dum=head;
        int total=n/k;
        int rem=n%k;
        
        for(int i{};i<k && dum; i++)
        {
            ans[i]=dum;
            int remnum{};
            remnum=(rem>0)?1:0;
            for(int j{};j<total+remnum-1;j++)
            {
                dum=dum->next;
            }
            ListNode* node=dum->next;
            dum->next=NULL;
            dum=node;
            rem--;
        }
        return ans;
    }
};