class Solution {
public:
    bool canPartition(vector<int>& nums) 
    {
        int summ=accumulate(nums.begin(),nums.end(),0);
        if(summ%2!=0)
        {
            return false;
        }
        summ/=2;
        int n=nums.size();
        int dp[n+1][summ+1];
        for(int i{};i<n+1;i++)
        {
            for(int j{};j<summ+1;j++)
            {
                if(j>=1 && i==0)
                {
                    dp[i][j]=0;
                }
                if(j==0)
                {
                    dp[i][j]=1;
                }
            }
        }
        for(int i{1};i<n+1;i++)
        {
            for(int j{1};j<summ+1;j++)
            {
                if(nums[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-nums[i-1]] || dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][summ];
        
    }
};