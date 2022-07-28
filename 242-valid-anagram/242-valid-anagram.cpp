class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        vector<int>v1(26,0);
        vector<int>v2(26,0);
        if(s.size()!=t.size())
        {
            return false;
        }
        for(char c:s)
        {
            v1[c-'a']++;
        }
        for(char a:t)
        {
            v2[a-'a']++;
        }
        return v1==v2;
        
        
    }
};