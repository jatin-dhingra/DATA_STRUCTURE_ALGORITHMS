class Solution {
public:
    int MOD=1e9+7;
    int dp[20001][26];
    int solve(int n,map<char,vector<char>>&m,char pre,int ind)
    {
        if(ind==n)
        {
            return 1;
        }
        if(dp[ind][pre-'a']!=0)
        {
            return dp[ind][pre-'a'];
        }
        int count{};
        for(auto i:m[pre])
        {
            count=(count%MOD+(solve(n,m,i,ind+1))%MOD)%MOD;
            
        }
        return dp[ind][pre-'a']=count;
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
        memset(dp,0,sizeof(dp));
        return solve(n,m,'x',0);
        
        
    }
};