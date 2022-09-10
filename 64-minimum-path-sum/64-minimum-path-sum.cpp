class Solution {
public:
    long long dp[201][201];
    long long solve(int i,int j,vector<vector<int>>& nums)
    {
         if(i==0 && j==0)
         {
             return nums[0][0];
         }
        if(i<0 || j<0)
        {
            return INT_MAX-1;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        long long  up=nums[i][j]+solve(i-1,j,nums);
        long long   left=nums[i][j]+solve(i,j-1,nums);
        return dp[i][j]=min(up,left);
    }
    int minPathSum(vector<vector<int>>& nums) 
    {
        int n=nums.size();
        int m=nums[0].size();
        memset(dp,-1,sizeof(dp));
        return (int)solve(n-1,m-1,nums);
        
    }
};