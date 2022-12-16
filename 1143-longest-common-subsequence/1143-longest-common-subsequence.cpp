class Solution {
public:
    int longestCommonSubsequence(string a, string b) 
    {
        int n=a.size();
        int m=b.size();
        int dp[n+1][m+1];
       // memset(dp,-1,sizeof(dp));
        
        for(int i{};i<n+1;i++)
        {
            for(int j{};j<m+1;j++)
            {
                if(i==0 || j==0)
                {
                    dp[i][j]=0;
                }
            }
        }
        for(int i{1};i<n+1;i++)
        {
            for(int j{1};j<m+1;j++)
            {
                if(a[i-1]==b[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
        
    }
};