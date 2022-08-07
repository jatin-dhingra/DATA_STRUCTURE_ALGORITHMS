class Solution {
public:
    int MOD=1e9+7;
    int dp[20001][26]={0};
    int solve(int n,map<char,vector<char>>&m,char prev,int ind)
    {
        if(n==ind)
        {
            return 1;
        }
        if(dp[ind][prev-'a'])
        {
            return dp[ind][prev-'a'];
        }
        int count{};
        for(auto i:m[prev])
        {
            count=(count%MOD+(solve(n,m,i,ind+1))%MOD)%MOD;
        }
        return dp[ind][prev-'a']=count;
    }
    int countVowelPermutation(int n)
    {
        map<char,vector<char>>m;
        m['a']={'e'};
        m['e']={'a','i'};
        m['i']={'a','e','o','u'};
        m['o']={'i','u'};
        m['u']={'a'};
        m['x']={'a','e','i','o','u'};
        
        return solve(n,m,'x',0);
        
    }
};