class Solution {
public:
    // int dp[101];
    // int solve(vector<int>&nums,int ind)
    // {
    //     if(ind<0)
    //     {
    //         return 0;
    //     }
    //     if(ind==0)
    //     {
    //         return nums[ind];
    //     }
    //     if(dp[ind]!=-1)
    //     {
    //         return dp[ind];
    //     }
    //     int take=nums[ind]+solve(nums,ind-2);
    //     int nottake=solve(nums,ind-1);
    //     return dp[ind]=max(take,nottake);
    // }
    int rob(vector<int>& nums) 
    {
        
        int n=nums.size();
        
        int dp[n+1];
        dp[0]=nums[0];
        int take{},nottake{};
        for(int i{1};i<n;i++)
        {
            
            take=nums[i];
            if(i>1)
            {
                take+=dp[i-2];
            }
            nottake=dp[i-1];
            dp[i]=max(take,nottake);
        }
        return dp[n-1];
        
    }
};