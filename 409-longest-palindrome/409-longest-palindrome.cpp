class Solution {
public:
    int longestPalindrome(string s) 
    {
        
        int n=s.size();
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        unordered_map<char,int>m;
        for(char c:s)
        {
            m[c]++;
        }
        int count{};
        int odd{};
        for(auto i:m)
        {
            if(i.second%2==0)
            {
                count+=i.second;
            }
            else
            {
                count+=i.second-1;
                odd=1;
            }
        }
        if(odd)
        {
            return count+1;
        }
        return count;
        
        
    }
};