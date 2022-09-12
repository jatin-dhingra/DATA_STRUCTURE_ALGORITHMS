class Solution {
public:
    long long dp[201][201];
    long long solve(vector<vector<int>>& grid,int i,int j)
    {
        if(i==0 && j==0)
        {
            return grid[i][j];
            
        }
        if(i<0 ||j<0)
        {
            return INT_MAX-1;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        long long up=grid[i][j]+solve(grid,i-1,j);
        long long left=grid[i][j]+solve(grid,i,j-1);
        return dp[i][j]=min(up,left);
    }
    int minPathSum(vector<vector<int>>& grid) 
    {
        memset(dp,-1,sizeof(dp));
        int n=grid.size();
        int m=grid[0].size();
        return (int)solve(grid,n-1,m-1);
        
    }
};