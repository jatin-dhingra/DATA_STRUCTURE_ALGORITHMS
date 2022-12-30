class Solution {
public:
    int dp[101];
    int solve(vector<int>&nums,int ind)
    {
        if(ind==0)
        {
            return nums[0]; 
        }
        if(ind<0)
        {
            return 0;
        }
        if(dp[ind]!=-1)
        {
            return dp[ind];
        }
        int pick=nums[ind]+solve(nums,ind-2);
        int notpick=solve(nums,ind-1);
        return dp[ind]=max(pick,notpick);
    }
    int rob(vector<int>& nums) 
    {
        
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
        return solve(nums,n-1);
        
    }
};