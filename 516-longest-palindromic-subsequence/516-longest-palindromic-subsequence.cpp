class Solution {
public:
    int longestPalindromeSubseq(string s)
    {
        string t=s;
        reverse(t.begin(),t.end());
        int n=s.size();
        int dp[n+1][n+1];
        memset(dp,-1,sizeof(dp));
        for(int i{};i<n+1;i++)
        {
            for(int j{};j<n+1;j++)
            {
                if(i==0 || j==0)
                {
                    dp[i][j]=0;
                }
            }
        }
        for(int i{1};i<n+1;i++)
        {
            for(int j{1};j<n+1;j++)
            {
                if(s[i-1]==t[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }           
            }
        }
        
        return dp[n][n];
    }
};