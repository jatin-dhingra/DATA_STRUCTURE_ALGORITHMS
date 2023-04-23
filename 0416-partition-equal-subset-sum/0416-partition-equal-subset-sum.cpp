class Solution {
public:
    bool solve(vector<int>&nums,int sum,int ind,vector<vector<int>>&dp)
    {
        if(sum==0)
        {
            return true;
        }
        if(ind==0)
        {
            return nums[ind]==sum;
        }
        if(dp[ind][sum]!=-1)
        {
            return dp[ind][sum];
        }
        bool notpick=solve(nums,sum,ind-1,dp);
        bool pick=false;
        if(nums[ind]<=sum)
        {
            pick=solve(nums,sum-nums[ind],ind-1,dp);
        }
        return dp[ind][sum]=pick|notpick;
    }
    bool canPartition(vector<int>& nums) 
    {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum&1)
        {
            return 0;
        }
        sum/=2;
        int n=nums.size();
        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        return solve(nums,sum,n-1,dp);
        
    }
};