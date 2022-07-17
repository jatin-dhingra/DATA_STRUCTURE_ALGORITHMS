class Solution {
public:
    
 
    int mod=1e9+7;
    int dp[1001][1001]={};
    int kInversePairs(int n, int k) 
    {
        dp[0][0]=1;
        for(int i=1;i<=n;i++)
        {
            long long win=0;
            for(int j=0;j<=k;j++)
            {
                win+=dp[i-1][j];
                if(j>=i)
                {
                    win-=dp[i-1][j-i];
                }
                dp[i][j]+=win%mod;
            }
        }
        return dp[n][k];
        
    }
};