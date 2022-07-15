class Solution {
public:
    
    bool solve(int summ,vector<int>&nums,int n,vector<vector<int>> &dp)
    {
        if(summ==0)
        {
            return true;
        }
        if(n==0 && summ!=0)
        {
            return false;
        }
        if(dp[n][summ]!=-1)
        {
            return dp[n][summ];
        }
        if(nums[n-1]>summ)
        {
            return dp[n][summ]=solve(summ,nums,n-1,dp);
            
        }
        return dp[n][summ]=solve(summ-nums[n-1],nums,n-1,dp)|| solve(summ,nums,n-1,dp); 
    }
    
    bool canPartition(vector<int>& nums) 
    {
        int n=nums.size();
        
        int summ=accumulate(nums.begin(),nums.end(),0);
        if(summ%2!=0)
        {
            return false;
        }
        vector<vector<int>>dp(n+1,vector<int>((summ/2)+1,-1));
        
       
        return solve(summ/2,nums,n,dp);
        
    }
};