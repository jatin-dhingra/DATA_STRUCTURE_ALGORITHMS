class Solution {
public:
    bool canPartition(vector<int>& nums)
    {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        if(sum%2!=0)
        {
            return 0;
        }
        sum/=2;
        int dp[n+1][sum+1];
        for(int i{};i<=n;i++)
        {
            for(int j{};j<=sum;j++)
            {
                if(i==0)
                {
                    dp[i][j]=0;
                }
                if(j==0)
                {
                    dp[i][j]=1;
                }
                if(i==0 && j==0)
                {
                    dp[i][j]=1;
                }
            }
        }
        for(int i{1};i<=n;i++)
        {
            for(int j{1};j<=sum;j++)
            {
                if(nums[i-1]<=j)
                {
                    dp[i][j]=(dp[i-1][j]|| dp[i-1][j-nums[i-1]]);
                }
                else if(nums[i-1]>j)
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
        
    }
};