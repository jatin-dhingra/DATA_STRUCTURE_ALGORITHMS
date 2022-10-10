class Solution {
public:
    string breakPalindrome(string s) 
    {
        string ans{};
        int n=s.size();
        int i{},j=n;
        int check{};
        while(i<j/2)
        {
            if(s[i]!='a')
            {
                s[i]='a';
                check=1;
                return s;
            }
            i++;
        }
        
        s[n-1]='b';
        
        return !check && n<2?ans:s;
        
    }
};