class Solution {
public:
    int minSteps(string s, string t) 
    {
        map<char,int>m1,m2;
        int n=s.size();
        int m=t.size();
        vector<int>v1(26),v2(26);
        for(int i{};i<n;i++){
            v1[s[i]-'a']++;
        }
        for(int i{};i<m;i++)
        {
             v2[t[i]-'a']++;
        }
        int count{};
        for(int i{};i<26;i++){
            
            count+=abs(v1[i]-v2[i]);
        }
        return count;
        
        
    }
};