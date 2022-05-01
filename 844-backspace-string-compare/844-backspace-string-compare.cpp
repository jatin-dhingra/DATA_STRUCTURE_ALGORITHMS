class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        stack<char>st1,st2;
        
        string one{},two{};
        for(int i{};i<s.size();i++)
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
        for(int i{};i<t.size();i++)
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