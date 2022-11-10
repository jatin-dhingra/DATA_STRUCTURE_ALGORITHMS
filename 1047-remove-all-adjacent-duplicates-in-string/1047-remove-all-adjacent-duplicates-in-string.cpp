class Solution {
public:
    string removeDuplicates(string s) 
    {
        stack<char>st;
        int n=s.size();
        st.push(s[0]);
        for(int i{1};i<n;i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(st.top()==s[i] && !st.empty())
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
        string ans{};
        while(!st.empty())
        {
            char c=st.top();
            st.pop();
            ans+=c;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};