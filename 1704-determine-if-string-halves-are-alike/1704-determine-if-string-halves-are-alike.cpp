class Solution {
public:
    bool halvesAreAlike(string s) 
    {
        int n=s.size();
        vector<char> vo={'a','e','i','o','u','A','E','I','O','U'};
        int count1{},count2{};
        
        for(int i{};i<n/2;i++)
        {
            for(char c:vo)
            {
                if(s[i]==c)
                {
                    count1++;
                }
            }
        }
        
        for(int i{n/2};i<n;i++)
        {
            for(char c:vo)
            {
                if(s[i]==c)
                {
                    count2++;
                }
            }
        }
        return count1==count2;
    }
};