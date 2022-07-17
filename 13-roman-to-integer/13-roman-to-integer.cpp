class Solution {
public:
    int romanToInt(string s) 
    {
        int ans{};
        map<char,int>m;
        m.insert({'I',1});
        m.insert({'V',5});
        m.insert({'X',10});
        m.insert({'L',50});
        m.insert({'C',100});
        m.insert({'D',500});
        m.insert({'M',1000});
        
        int n=s.size();
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