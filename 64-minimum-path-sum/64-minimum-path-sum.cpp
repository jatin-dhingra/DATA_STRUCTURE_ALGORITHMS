class Solution {
public:
    int dp[201][201];
    int solve(vector<vector<int>>&grid,int x,int y)
    {
        if(x>=grid.size() || y>=grid[0].size())
        {
            return INT_MAX;
        }
        if(x==grid.size()-1 && y==grid[0].size()-1)
        {
            return grid[grid.size()-1][grid[0].size()-1];
        }
        if(dp[x][y]!=-1)
        {
            return dp[x][y];
        }
        int right=solve(grid,x,y+1);
        int down=solve(grid,x+1,y);
        
        return dp[x][y]=grid[x][y]+min(right,down);
    }
    
    int minPathSum(vector<vector<int>>& grid) 
    {
        memset(dp,-1,sizeof(dp));
        int n=grid.size();
        int m=grid[0].size();
        return solve(grid,0,0);
         
        
    }
};