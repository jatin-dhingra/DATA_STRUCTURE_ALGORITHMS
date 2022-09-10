class Solution {
public:
    int dp[101][101];
    int solve(int i,int j,vector<vector<int>>&nums)
    {
        if(i>=0 && j>=0 && nums[i][j]==1)
        {
            return 0;
        }
        if(i==0 && j==0)
        {
            return 1;
        }
        if(i<0 || j<0)
        {
            return 0;
        }
       if(dp[i][j]!=-1)
       {
           return dp[i][j];
       }
        int up=solve(i-1,j,nums);
        int left=solve(i,j-1,nums);
        return dp[i][j]=up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>&nums) 
    {
        memset(dp,-1,sizeof(dp));
        int n=nums.size();
        int m=nums[0].size();
        
        return solve(n-1,m-1,nums);
    }
};