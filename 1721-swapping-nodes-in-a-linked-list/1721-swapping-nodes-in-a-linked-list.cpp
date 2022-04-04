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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        int s{};
        ListNode* p=head;
        while(p)
        {
            p=p->next;
            s++;
        }
        ListNode* q=head;
        ListNode* r=head;
        for(int i{};i<k-1;i++)
        {
            q=q->next;
            
        }
        for(int i{};i<s-k;i++)
        {
            r=r->next;
        }
        swap(q->val,r->val);
        return head;
        
    }
};