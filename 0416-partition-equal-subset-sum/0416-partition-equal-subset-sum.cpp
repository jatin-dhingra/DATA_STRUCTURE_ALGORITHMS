class Solution {
public:

//     bool solve(vector<int>&nums,int ind,int target,vector<vector<int>>&dp)
//     {
//         if(target==0)
//         {
//             return true;
//         }
//         if(ind==0)
//         {
//             return nums[0]==target;
            
//         }
//         if(dp[ind][target]!=-1)
//         {
//             return dp[ind][target];
//         }
//         bool notpick=solve(nums,ind-1,target,dp);
//         bool pick=false;
//         if(nums[ind]<=target)
//         {
//             pick=solve(nums,ind-1,target-nums[ind],dp);
//         }
//         return dp[ind][target]=notpick|pick;
//     }
    bool canPartition(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum&1)
        {
            return false;
        }
        
        int t=sum/2;
        int n=nums.size();
       int dp[n+1][t+1];
       
       // memset(dp,0,sizeof(dp));
        for(int i{};i<n+1;i++)
        {
            for(int j{};j<t+1;j++)
            {
                if(i==0 && j>=1)
                {
                    dp[i][j]=0;
                }
                if(j==0)
                {
                    dp[i][j]=1;
                }
                
            }
        }
        
        for(int i{1};i<n+1;i++)
        {
            for(int j{1};j<t+1;j++)
            {
                if(nums[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j]|| dp[i-1][j-nums[i-1]];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][t];
    }
};