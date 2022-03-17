class Solution {
public:
    int scoreOfParentheses(string s) 
    {
        int ans{};
        int n=s.size();
        stack<char>st;
        for(int i{};i<n;i++)
        {
            if(s[i]=='(')
            {
                st.push(ans);
                ans=0;
            }
            else
            {
                if(!ans)
                {
                    ans=st.top()+1;
                }
                else
                {
                    ans=ans*2+st.top();
                }
                st.pop();
                
            }
        }
        return ans;
        
    }
};