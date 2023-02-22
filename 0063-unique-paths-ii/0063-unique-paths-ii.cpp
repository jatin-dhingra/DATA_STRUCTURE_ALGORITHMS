class Solution {
public:
    int dp[101][101];
    int solve(vector<vector<int>>& grid,int x,int y)
    {
        if(x==grid.size()-1 && y==grid[0].size()-1 && grid[x][y]!=1)
        {
            return 1;
        }
        if(x>grid.size()-1 || y>grid[0].size()-1|| grid[x][y]==1)
        {
            return 0;
        }
        if(dp[x][y]!=-1)
        {
            return dp[x][y];
        }
        int down=solve(grid,x,y+1);
        int right=solve(grid,x+1,y);
        return dp[x][y]=down+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) 
    {
        memset(dp,-1,sizeof(dp));
        return solve(grid,0,0);
    }
};