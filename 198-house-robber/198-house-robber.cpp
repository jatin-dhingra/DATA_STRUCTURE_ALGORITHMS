class Solution {
public:
    int dp[101];
    int solve(int n,vector<int>&nums)
    {
        if(n==0)
        {
            return nums[n];
        }
        if(n<0)
        {
            return 0;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        int pick=nums[n]+solve(n-2,nums);
        
        int notpick=solve(n-1,nums);
        return dp[n]=max(pick,notpick);
    }
    int rob(vector<int>& nums) 
    {
        memset(dp,-1,sizeof(dp));
        int n=nums.size();
        return solve(n-1,nums);
        
    }
};