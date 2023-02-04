class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        int n=s1.size();
        int m=s2.size();
        if(n>m)
        {
            return false;
        }
        vector<int>v(26,0),v2(26,0);
        
        for(int i{};i<n;i++)
        {
            v[s1[i]-'a']++;
            v2[s2[i]-'a']++;
        }
        if(v==v2)
        {
            return true;
        }
        for(int i{n};i<m;i++)
        {
            if(v==v2)
            {
                return true;
            }
            v2[s2[i]-'a']++;
            v2[s2[i-n]-'a']--;
        }
        return v==v2;
    }
};