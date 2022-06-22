class Solution {
public:
    bool isSubsequence(string s, string t) 
    {
        int n=s.size();
        int m=t.size();
        int dp[n+1][m+1];
        memset(dp,-1,sizeof(dp));
        
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
                if(s[i-1]==t[j-1])
                {
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        return (dp[n][m]==n);
        
    }
};