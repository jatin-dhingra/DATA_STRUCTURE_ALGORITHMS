class Solution {
public:
    long long dp[201][201];
    long long solve(int i,int j,vector<vector<int>>&grid)
    {
        if(i==0 && j==0)
        {
            return grid[i][j];
        }
        if(i<0 || j<0)
        {
            return INT_MAX-1;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
            
        long long left=grid[i][j]+solve(i-1,j,grid);
        long long up=grid[i][j]+solve(i,j-1,grid);
        return dp[i][j]=min(left,up);
    }
    int minPathSum(vector<vector<int>>& grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        memset(dp,-1,sizeof(dp));
        return (int)solve(n-1,m-1,grid);
        
    }
};