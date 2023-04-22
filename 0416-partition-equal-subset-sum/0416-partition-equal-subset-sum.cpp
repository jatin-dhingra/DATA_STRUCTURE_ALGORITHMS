class Solution {
public:

    bool solve(vector<int>&nums,int ind,int target,vector<vector<int>>&dp)
    {
        if(target==0)
        {
            return true;
        }
        if(ind==0)
        {
            return nums[0]==target;
            
        }
        if(dp[ind][target]!=-1)
        {
            return dp[ind][target];
        }
        bool notpick=solve(nums,ind-1,target,dp);
        bool pick=false;
        if(nums[ind]<=target)
        {
            pick=solve(nums,ind-1,target-nums[ind],dp);
        }
        return dp[ind][target]=notpick|pick;
    }
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum&1)
        {
            return false;
        }
        
        int t=sum/2;
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(t+1,-1));
        return solve(nums,n-1,t,dp);
    }
};