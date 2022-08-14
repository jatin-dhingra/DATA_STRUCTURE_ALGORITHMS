class Solution {
public:
    int dp[101];
    int money(vector<int>&nums,int n)
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
        int pick=nums[n]+money(nums,n-2);
        int notpick=money(nums,n-1);
        return dp[n]=max(pick,notpick);
    }
    int rob(vector<int>& nums) 
    {
        memset(dp,-1,sizeof(dp));
        int n=nums.size();
        return money(nums,n-1);
        
    }
};