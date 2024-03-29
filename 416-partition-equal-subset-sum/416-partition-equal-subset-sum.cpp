class Solution {
public:
    bool check(vector<int>&nums,int n,int sum)
    {
        int dp[n+1][sum+1];
        for(int i{};i<n+1;i++)
        {
            for(int j{};j<sum+1;j++)
            {
                if(i==0 && j==0)
                {
                    dp[i][j]=1;
                }
                if(i==0 && j>=1)
                {
                    dp[i][j]=0;
                }
                if(j==0 && i>=1)
                {
                    dp[i][j]=1;
                }
                
            }
        }
        for(int i{1};i<n+1;i++)
        {
            for(int j{1};j<sum+1;j++)
            {
                if(nums[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-nums[i-1]]|| dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
    bool canPartition(vector<int>& nums) 
    {
        int sum{};
        int n=nums.size();
        sum=accumulate(nums.begin(),nums.end(),0);
        if(sum&1)
        {
            return false;
        }
        return check(nums,n,sum/2);
        
    }
};