class Solution {
public:
     int dp[101];
    int solve(vector<int>&nums,int n)
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
        int pick=nums[n]+solve(nums,n-2);
        int notpick=solve(nums,n-1);
        return dp[n]=max(pick,notpick);
    }
    
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
      
        memset(dp,-1,sizeof(dp));
        return solve(nums,n-1);
        
    }
};