class Solution {
public:
    bool ispalin(string s)
    {
        int n=s.size();
        for(int i{};i<n/2;i++)
        {
            if(s[i]!=s[n-i-1])
            {
                return false;
            }
        }
        return true;
    }
    int removePalindromeSub(string s) 
    {
       int i{};
        int j=s.size()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return 2;
            }
            i++;
            j--;
        }
        return 1;
        
    }
};