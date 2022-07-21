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
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        
        vector<int>v;
        ListNode* temp=head,*temp1=NULL;
        
        for(int i=1;i<left;i++) temp=temp->next;
        int j=left;
        
        while(j<=right){
            v.push_back(temp->val);
            temp=temp->next;
            j++;
        }
        temp=head;
        for(int i=1;i<left;i++)
        {
            temp=temp->next;
        }
        j=v.size()-1;
        while(left<=right){
            temp->val=v[j--];
            temp=temp->next;
            left++;
        }
        return head;
        
    }
};