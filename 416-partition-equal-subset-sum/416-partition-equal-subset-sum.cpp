class Solution {
public:
    bool subset(vector<int>&nums,int sum)
    {
        int n=nums.size();
        int dp[n+1][sum+1];
        
        for(int i{};i<n+1;i++){
            for(int j{};j<sum+1;j++)
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
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum&1)
        {
            return false;
        }
        
        return subset(nums,sum/2);
        
        
    }
};