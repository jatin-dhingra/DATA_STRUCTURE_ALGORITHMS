class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        string a;
        int count=0;
        set<int> sb;
        int i=0, j=0, ans=0;
        while(j<s.length())
        {
            if (sb.find(s[j])!=sb.end())
            {
             while (sb.find(s[j])!=sb.end())
             {
                 sb.erase(s[i]);
                 i++;
             }
            }
            sb.insert(s[j]);
            j++;
            
            if (sb.size()>ans)
            {
                 ans = sb.size();
            }
        }
        return ans;
        
    }
};