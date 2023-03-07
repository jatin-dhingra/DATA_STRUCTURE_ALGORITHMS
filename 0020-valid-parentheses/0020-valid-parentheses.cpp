class Solution {
public:
    bool isValid(string s)
    {
        stack<char>st;
        int n=s.size();
        for(int i{};i<n;i++)
        {
            if(s[i]=='}'|| s[i]==')'|| s[i]==']')
            {
                if(st.empty())
                {
                    return false;
                }
                if(s[i]==')' && st.top()!='(')
                {
                    return false;
                }
                if(s[i]==']' && st.top()!='[')
                {
                    return false;
                }
                if(s[i]=='}' && st.top()!='{')
                {
                    return false;
                }
                st.pop();
            }
            else
                st.push(s[i]);
        }
        return st.empty();
        
    }
};