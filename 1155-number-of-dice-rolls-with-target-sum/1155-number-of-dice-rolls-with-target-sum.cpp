class Solution {
public:
    int mod=1e9+7;
    int dp[31][1001]; 
    int solve(int n,int k,int t)
    {
        if(t<0 || n<0)
        {
            return 0;
        }
        if(t==0 && n==0)
        {
            return 1;
        }
        
        if(dp[n][t]!=-1)
        {
            return dp[n][t];
        }
        int total{};
        
        for(int i=1;i<=k;i++)
        {
            total=(total%mod+(solve(n-1,k,t-i))%mod)%mod;    
        }
        
        return dp[n][t]=total;
    }
    
    int numRollsToTarget(int n, int k, int target) 
    {
        
        memset(dp,-1,sizeof(dp));
        return solve(n,k,target);
        
    }
};