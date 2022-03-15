class Solution {
public:
    string minRemoveToMakeValid(string s) 
    {
        string ans{};
        stack<string>st;
        int n=s.size();
        int open{};
        for(int i{};i<n;i++)
        {
            if(s[i]=='(')
            {
                open++;
            }
            else if(s[i]==')')
            {
                if(!open)
                {
                    continue;
                }
                open--;
            }
            ans+=s[i];
        }
        string mainans{};
        for(int i=ans.size()-1;i>=0;i--)
        {
            if(ans[i]=='(' && open-->0)
            {
                continue;
            }
            mainans+=ans[i];
        }
        string finalans=mainans;
        reverse(finalans.begin(),finalans.end());
        return finalans;
    }
};