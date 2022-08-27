class Solution {
public:
    int dfs(int x,int y,vector<vector<int>>& grid)
    {
        if(x<0 || y<0 || x>=grid.size()|| y>=grid[0].size()||  grid[x][y]==0)
        {
            return 0;
        }
        grid[x][y]=0;
        int a=dfs(x-1,y,grid);
        int b=dfs(x+1,y,grid);
        int c=dfs(x,y-1,grid);
        int d=dfs(x,y+1,grid);
        return 1+a+b+c+d;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int count{};
        int ans=INT_MIN;
        int n=grid.size();
        int m=grid[0].size();
        for(int i{};i<n;i++)
        {
            for(int j{};j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    count=max(count,dfs(i,j,grid));
                }
            }
           
        }
        return count;
        
    }
};