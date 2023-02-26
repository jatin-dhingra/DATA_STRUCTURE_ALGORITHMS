class Solution {
public:
    int lps(string a,string b,int n,int m)
    {
        int dp[n+1][m+1];
        for(int i{};i<=n;i++)
        {
            for(int j{};j<=m;j++)
            {
                if(i==0)
                {
                    dp[i][j]=j;
                }
                else if(j==0)
                {
                    dp[i][j]=i;
                }
            }
        }
        for(int i{1};i<=n;i++)
        {
            for(int j{1};j<=m;j++)
            {
                 if(a[i-1]==b[j-1])
                {
                    dp[i][j]=dp[i-1][j-1];
                }
                else
                {
                    dp[i][j]=1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
                }
            }
        }
        return dp[n][m];
    }
    int minDistance(string a, string b) 
    {
        int n=a.size();
        int m=b.size();
        
        return lps(a,b,n,m);
    }
};