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
    bool ispalin(string s)
    {
        int n=s.size();
        for(int i{};i<n/2;i++)
        {
            if(s[i]!=s[n-i-1])
            {
                return false;
            }
        }
        return true;
    }
    bool isPalindrome(ListNode* head) 
    {
        ListNode* dum=head;
        string s{};
        if(head==NULL)
        {
            return true;
        }
        while(dum)
        {
            s+=(to_string(dum->val));
            dum=dum->next;
        }
        
        return ispalin(s);
        
    }
};