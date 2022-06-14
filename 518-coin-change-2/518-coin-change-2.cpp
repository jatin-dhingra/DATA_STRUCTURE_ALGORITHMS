class Solution {
public:
    int change(int amount, vector<int>& coins) 
    {
        int n=coins.size();
        int sum=amount;
        int dp[n+1][sum+1];
        for(int i{};i<n+1;i++)
        {
            for(int j{};j<sum+1;j++)
            {
                if(i==0 )
                {
                    dp[i][j]=0;
                }
                if( i>=1 && j==0)
                {
                    dp[i][j]=1;
                }
            }
        }
        
        for(int i{1};i<n+1;i++)
        {
            for(int j{1};j<sum+1;j++)
            {
                if(coins[i-1]<=j)
                {
                    dp[i][j]=dp[i][j-coins[i-1]]+dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        return dp[n][sum];
        
    }
};