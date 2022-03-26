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
    int bin(string ans)
    {
        string num = ans;
        int dec_value = 0;
 
        int base = 1;
 
        int len = num.length();
        for (int i = len - 1; i >= 0; i--) {
            if (num[i] == '1')
                dec_value += base;
            base = base * 2;
        }
 
         return dec_value;
    }
    int getDecimalValue(ListNode* head) 
    {
        string ans{};
        while(head)
        {
            ans+=to_string((head->val));
            head=head->next;
            
        }
        return bin(ans);
        
    }
};