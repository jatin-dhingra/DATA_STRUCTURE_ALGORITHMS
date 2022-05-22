class Solution {
public:
    int countSubstrings(string s)
    {
        int n=s.size();
        int dp[n+1][n+1];
        memset(dp,0,sizeof(dp));
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i;j<n;j++)
            {
                if(i==j)
                {
                    dp[i][j]=1;
                }
                else if(j-i==1)
                {
                    dp[i][j]=(s[i]==s[j]?1:0);
                }
                else
                {
                    dp[i][j]=(s[i]==s[j] && dp[i+1][j-1]==1)?1:0;
                }
            }
        }    
        
        int count{};
        for(int i{};i<n;i++)
        {
            for(int j{};j<n;j++)
            {
                count+=dp[i][j];
            }
        }
        return count;
    }
};