class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int n=s.size();
        vector<int>map(256,0);
        int a{};
        int b{};
        int len{};
        while(a<n)
        {
            map[s[a]]++;
            while(map[s[a]]>1)
            {
                map[s[b]]--;
                b++;
            }
            len=max(len,a-b+1);
            a++;
        }
        
        return len;
        
    }
};