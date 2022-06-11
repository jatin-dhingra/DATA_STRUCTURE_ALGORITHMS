class Solution {
public:
    
    bool ispalin(string s,int st,int e)
    {
        
        while(st<=e)
        {
            if(s[st++]!=s[e--])
            {
                return false;
            }
        }
        return true;
    }
    
    void solve(string s,vector<vector<string>>&ans,vector<string>&v,int ind)
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
                solve(s,ans,v,i+1);
                v.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s)
    {
        vector<vector<string>>ans;
        vector<string>v;
        int ind=0;
        solve(s,ans,v,ind);
        return ans;
        
    }
};