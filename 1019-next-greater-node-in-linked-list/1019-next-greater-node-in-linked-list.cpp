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
    void nextgreater(int n,vector<int>&v,vector<int>&ans)
    {
        stack<int>st;
        for(int i=n-1;i>=0;i--)
        {
            if(st.empty())
            {
                ans.push_back(0);
            }
            else if(!st.empty() && st.top()>v[i])
            {
                ans.push_back(st.top());
            }
            else if(!st.empty() && st.top()<=v[i])
            {
                while(!st.empty() && st.top()<=v[i])
                {
                    st.pop();
                }
                if(st.empty())
                {
                    ans.push_back(0);
                }
                else
                {
                    ans.push_back(st.top());
                }
            }
            st.push(v[i]);
        }
        reverse(ans.begin(),ans.end());
        
    }
    
    vector<int> nextLargerNodes(ListNode* head) 
    {
        vector<int>v;
        vector<int>ans;
        ListNode* start=head;
        while(start!=NULL)
        {
            v.push_back(start->val);
            start=start->next;
        }
        int n=v.size();
        nextgreater(n,v,ans);
        return ans;
        
    }
};