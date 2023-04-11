class Solution {
public:
    // long long profit{};
    // int dp[30001][2];
    // int solve(vector<int>&nums,int ind,int buy)
    // {
    //     if(nums.size()==ind)
    //     {
    //         return 0;
    //     }
    //     if(!dp[ind][buy])
    //     {
    //         return dp[ind][buy];
    //     }
    //     if(buy)
    //     {
    //         profit=max(-nums[ind]+solve(nums,ind+1,0),solve(nums,ind+1,1));
    //     }
    //     else
    //     {
    //         profit=max(nums[ind]+solve(nums,ind+1,1),solve(nums,ind+1,0));
    //     }
    //     return dp[ind][buy]=profit;
    // }
    int maxProfit(vector<int>& nums) 
    {
       
        //memset(dp,-1,sizeof(dp));
        int n=nums.size();
        int dp[n+1][2];
        dp[n][0]=0;
        dp[n][1]=0;
        for(int i=n-1;i>=0;i--)
        {
            dp[i][1]=max(-nums[i]+dp[i+1][0],dp[i+1][1]);
            dp[i][0]=max(nums[i]+dp[i+1][1],dp[i+1][0]);
        }
        return dp[0][1];
        //return solve(nums,0,1);
    }
};