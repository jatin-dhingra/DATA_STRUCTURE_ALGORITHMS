class Solution {
public:
   
    
    int longestCommonSubsequence(string text1, string text2) 
    {
        int n=text1.size();
        int m=text2.size();
        int dp[n+1][m+1];
       memset(dp,-1,sizeof(dp));
        
        for(int i{};i<n+1;i++)
        {
            for(int j{};j<m+1;j++)
            {
                if(i==0 || j==0)
                {
                    dp[i][j]=0;
                    // base condition when n==0 || m==0 i index represent steh text1 lenght and j represent text2 length
                }
            }
        }
        for(int i{1};i<n+1;i++)
        {
            for(int j{1};j<m+1;j++)
            {
                if(text1[i-1]==text2[j-1])
                {
                    // when the both n and m became equal htne simple ignore the rest of the lenght and inc it by 1
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else
                {
                    // otherwise simpley go fo n-1 with m chars OR n with m-1 chars
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
        
    }
};