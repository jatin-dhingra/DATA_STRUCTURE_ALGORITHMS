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
        int n{};
        ListNode* p=head;
        ListNode* q=head;
        // ListNode* r=head;
        int count{};
        while(p)
        {
            p=p->next;
            count++;
        }
        int arr[count];
        int i{};
        while(q)
        {
            arr[i]=q->val;
            q=q->next;
            i++;
        }
        swap(arr[k-1],arr[count-k]);
        ListNode* r=head;
        ListNode* keep=r;
        for(int i{};i<count;i++)
        {
            r->val=arr[i];
            r=r->next;
        }
        
        return keep;
        
    }
};