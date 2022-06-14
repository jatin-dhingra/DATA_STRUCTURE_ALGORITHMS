class Solution {
public:
    int coinChange(vector<int>& nums, int amount) 
    {
        int n=nums.size();
        int sum=amount;
        
        long long dp[n+1][sum+1];
        
        for(int i{};i<n+1;i++)
        {
            for(int j{};j<sum+1;j++)
            {
                if(i==0)
                {
                    dp[i][j]=INT_MAX;
                }
                if(j==0)
                {
                    dp[i][j]=0;
                }
            }
        }
        
        for(int i{1};i<n+1;i++)
        {
            for(int j{1};j<sum+1;j++)
            {
                if(nums[i-1]<=j)
                {
                    dp[i][j]=min(dp[i-1][j],dp[i][j-nums[i-1]]+1);
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        return (dp[n][sum]==INT_MAX?-1:dp[n][sum]);
        
    }
};