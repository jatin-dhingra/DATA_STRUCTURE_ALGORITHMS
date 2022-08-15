class Solution {
public:
    int romanToInt(string s) 
    {
        map<char,int>m;
        m['I']=1;
        m['V']=5;
        m['X']=10;
        m['L']=50;
        m['C']=100;
        m['D']=500;
        m['M']=1000;
        
        int n=s.size();
        int ans{};
        for(int i{};i<n;i++)
        {
            if(m[s[i]]<m[s[i+1]])
            {
                ans+=m[s[i+1]]-m[s[i]];
                i++;
                continue;
            }
            ans+=m[s[i]];
        }
        return ans;
    }
};