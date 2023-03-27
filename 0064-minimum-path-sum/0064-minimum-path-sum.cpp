class Solution {
public:
    int dp[201][201];
    int solve(vector<vector<int>>&grid,int x,int y)
    {
        if(x<0 || y<0)
        {
            return 1e6;
        }
        if(x==0 && y==0)
        {
            return grid[0][0];
        }
        if(dp[x][y]!=-1)
        {
            return  dp[x][y];
        }
        int left=grid[x][y]+solve(grid,x-1,y);
        int up= grid[x][y]+solve(grid,x,y-1);
        return dp[x][y]=min(left,up);
    }
    int minPathSum(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        memset(dp,-1,sizeof(dp));
        return solve(grid,n-1,m-1);
    }
};