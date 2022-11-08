class Solution {
public:
    bool check(char a,char b)
    {
        if((isupper(a) && islower(b)) || (isupper(b) && islower(a)) && abs(a-b)==32)
        {
            return true;
        }
        return false;
    }
    string makeGood(string s) 
    {
        string ans{};
        stack<char>st;
        int n=s.size();
        if(n==1)
        {
            return s;
        }
     
        for(int i{};i<n;i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            }
            else if(abs(st.top()-s[i])==32)
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
        }
      
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