class Solution {
public:
    int dp[1002];
    int solve(vector<int>&nums,int target,int ind)
    {
        if(target==0)
        {
            return 1;
        }
        if(target<0)
        {
            return  0;
        }
        if(dp[target]!=-1)
        {
            return dp[target];
        }
        int ans{};
        
        for(int i{};i<nums.size();i++)
        {
            ans+=solve(nums,target-nums[i],ind);
        }
        return dp[target]=ans;
    }
    int combinationSum4(vector<int>& nums, int target) 
    {
        memset(dp,-1,sizeof(dp));
        return solve(nums,target,0);
        
        
    }
};