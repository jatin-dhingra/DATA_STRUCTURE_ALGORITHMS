class Solution {
public:
    void solve(string s,vector<string>&ans,string str,int ind)
    {
        if(ind==s.size())
        {
            ans.push_back(s);
            return;
        }
        if(isalpha(s[ind]))
        {
            s[ind]=tolower(s[ind]);
            solve(s,ans,str,ind+1);
            s[ind]=toupper(s[ind]);
            solve(s,ans,str,ind+1);
        }
        else
        {
            solve(s,ans,str,ind+1);
        }
        
    }
    vector<string> letterCasePermutation(string s) 
    {
        vector<string>ans;
        string str;
        solve(s,ans,str,0);
        return ans;
        
    }
};