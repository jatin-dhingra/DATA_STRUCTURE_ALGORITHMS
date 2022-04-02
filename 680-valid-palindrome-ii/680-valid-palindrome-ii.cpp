class Solution {
public:
    bool palin(string s, int a,int b)
    {
        while(a<=b)
        {
            if(s[a]!=s[b])
            {
                return false;
            }
            a++;
            b--;
        }
        return true;
    }
    bool validPalindrome(string s) 
    {
        int a=0;
        int b=s.size()-1;
        
        while(a<=b)
        {
            if(s[a]!=s[b])
            {
                if(palin(s,a+1,b)||palin(s,a,b-1))
                {
                    return true;
                }
                return false;
            }
            a++;
            b--;
        }
        return true;
        
        
        
    }
};