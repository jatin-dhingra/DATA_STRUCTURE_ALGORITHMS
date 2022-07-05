class Solution {
public:
    bool backspaceCompare(string s, string t) 
    {
        stack<char>st1,st2;
        
        for(auto i:s)
        {
            if(i=='#' && !st1.empty())
            {
                st1.pop();
            }
            else if(i!='#')
            {
                st1.push(i);
            }
        }
        
        for(auto i:t)
        {
            if(i=='#' && !st2.empty())
            {
                st2.pop();
            }
            else if(i!='#')
            {
                st2.push(i);
            }
        }
        return st1==st2;
        
    }
};