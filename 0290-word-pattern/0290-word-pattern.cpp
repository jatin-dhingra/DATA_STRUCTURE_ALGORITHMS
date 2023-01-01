class Solution {
public:
    bool wordPattern(string p, string s) 
    {
        int n=p.size();
        int m=s.size();
        map<char,vector<int>>m1;
        map<string,vector<int>>m2;
        
        for(int i{};i<n;i++)
        {
            m1[p[i]].push_back(i);
        }
        
        string str{};
        int j{};
        vector<vector<int>>v1,v2;
        for(auto i:s)
        {
            if(i==' ')
            {
                
                m2[str].push_back(j);
                j++;
                str="";
            }
            else
            {
                str.push_back(i);
            }
        }
        m2[str].push_back(j);
        for(auto i:m2)
        {
           vector<int>ans;
            for(auto j:i.second)
            {
                ans.push_back(j);
            }
            v2.push_back(ans);
            
        }
        for(auto i:m1)
        {
           vector<int>ans;
            for(auto j:i.second)
            {
                ans.push_back(j);
            }
            v1.push_back(ans);
            
        }
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        return v1==v2;
        
    }
};