class Solution {
public:
    string removeDuplicates(string s) 
    {
        string ans{};
        stack<char>st;
        for(char c:s)
        {
            if(st.empty()|| st.top()!=c)
            {
                st.push(c);
            }
            else
            {
                st.pop();
            }
        }
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};