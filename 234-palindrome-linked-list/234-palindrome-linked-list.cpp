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
    bool check(string s)
    {
        for(int i{};i<s.size()/2;i++)
        {
            if(s[i]!=s[s.size()-i-1])
            {
                return false;
            }
            
        }
        return true;
    }
    bool isPalindrome(ListNode* head) 
    {
        string s{};
        
        while(head)
        {
            s+=(to_string(head->val));
            head=head->next;
        }
        return check(s);
        
    }
};