class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        stack<char>st1,st2;
        int n=s.size();
        int m=t.size();
        for(int i{};i<n;i++)
        {
            if(s[i]=='#' && !st1.empty())
            {
                st1.pop();
            }
            else if(s[i]!='#')
            {
                st1.push(s[i]);
            }
        }
        
        for(int i{};i<m;i++)
        {
            if(t[i]=='#' && !st2.empty())
            {
                st2.pop();
            }
            else if(t[i]!='#')
            {
                st2.push(t[i]);
            }
        }
        return st1==st2;
        
    }
};