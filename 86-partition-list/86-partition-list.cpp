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
    ListNode* partition(ListNode* head, int x)
    {
        ListNode* temp=head;
        vector<ListNode*> before;
        vector<ListNode*>after;
        
        while(temp){
            if(temp->val < x){
                before.push_back(temp);
                temp=temp->next;
                before.back()->next=NULL;
            }
            else {
                after.push_back(temp);
                temp=temp->next;
                after.back()->next=NULL;
            } 
        }
        ListNode* ans=new ListNode();
        temp=ans;
        for(auto i:before){
            temp->next=i;
            temp=temp->next;
        }
        for(auto i:after){
            temp->next=i;
            temp=temp->next;
        }
        return ans->next;
        
    }
};