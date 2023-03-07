class Solution {
public:
    int dp[71][71][71];
    int solve(int i,int j1,int j2,vector<vector<int>>&grid)
    {
        if(j1<0 || j1>grid[0].size()-1 || j2<0 || j2>grid[0].size()-1)
        {
            return -1e7;
        }
        if(i==grid.size()-1)
        {
            return (j1!=j2?(grid[i][j1]+grid[i][j2]):grid[i][j1]);
        }
        if(dp[i][j1][j2]!=-1)
        {
            return dp[i][j1][j2];
        }
        int ans{};
        for(int jj1{-1};jj1<=1;jj1++)
        {
            for(int jj2{-1};jj2<=1;jj2++)
            {
                
                if(j1==j2)
                {
                    ans=max(grid[i][j1]+solve(i+1,j1+jj1,j2+jj2,grid),ans);
                    
                }
                else
                {
                    ans=max(grid[i][j1]+grid[i][j2]+solve(i+1,j1+jj1,j2+jj2,grid),ans);
                }
            }
        }
       
        return dp[i][j1][j2]=ans;
    }
    int cherryPickup(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        memset(dp,-1,sizeof(dp));
        return solve(0,0,m-1,grid);
        
    }
};