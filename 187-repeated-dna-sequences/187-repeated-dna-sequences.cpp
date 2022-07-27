class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) 
    {
        vector<string>ans;
        if(s.size()<=9)
        {
            return ans;
        }
        unordered_map<string,int>m;
        for(int i{};i<=s.size()-10;i++)
        {
            string str=s.substr(i,10);
            if(m.find(str)==m.end())
            {
                m[str]=0;
            }
            else if(!m[str])
            {
                ans.push_back(str);
                m[str]=1;
            }
        }
        return ans;
        
        
    }
};