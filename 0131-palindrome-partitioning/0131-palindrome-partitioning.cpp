class Solution {
public:
    bool ispalin(string s,int i,int j)
    {
        int n=s.size();
        
        while(i<=j)
        {
            if(s[i++]!=s[j--])
            {
                return false;
            }
        }
        return true;
    }
    void solve(string s,int ind,vector<vector<string>>&ans,vector<string>&v)
    {
        if(ind==s.size())
        {
            ans.push_back(v);
        }
        for(int i=ind;i<s.size();i++)
        {
            if(ispalin(s,ind,i))
            {
                
                 v.push_back(s.substr(ind,i-ind+1));
                solve(s,i+1,ans,v);
                v.pop_back();
            }
           
        }
    }
    vector<vector<string>> partition(string s) 
    {
        int n=s.size();
        vector<vector<string>>ans;
        vector<string>v;
        solve(s,0,ans,v);
        return ans;
        
    }
};