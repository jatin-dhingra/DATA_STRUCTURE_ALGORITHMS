class Solution {
public:
    
    bool check(string a,string b)
    {
        unordered_map<char,int>m1,m2;
        int n=a.size();
        if(a.size()!=b.size())
        {
            return false;
        }
        for(int i{};i<n;i++)
        {
            if(m1[a[i]]!=m2[b[i]])
            {
                return false;
            }
            m1[a[i]]=i+1;
            m2[b[i]]=i+1;
        }
        return true;
    }
    
    vector<string> findAndReplacePattern(vector<string>& w, string p) 
    {
        vector<string>ans;
        for(auto i:w)
        {
            if(check(i,p))
            {
                ans.push_back(i);
            }
        }
        return ans;
        
        
        
    }
};