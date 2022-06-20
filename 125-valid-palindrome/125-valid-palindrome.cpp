class Solution {
public:
    bool palin(string x)
    {
        for(int i{};i<x.size()/2;i++)
        {
            if(x[i]!=x[x.size()-i-1])
            {
                return false;
            }
        }
        return true;
    }
    bool isPalindrome(string s) 
    {
        string ans{};
        int n=s.size();
        for(int i{};i<n;i++)
        {
            if(isalpha(s[i]) || isdigit(s[i]))
            {
                if(islower(s[i])|| isupper(s[i]))
                {
                    if(isupper(s[i]))
                    {

                        ans+=tolower(s[i]);
                    }
                    else
                    {
                        ans+=s[i];
                    }
                }  
                else
                    ans+=s[i];
            }
        }
        return palin(ans);
        
    }
};