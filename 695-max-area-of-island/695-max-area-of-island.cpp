class Solution {
public:
    
    int  DFS(vector<vector<int>>&grid,int x,int y)
    {
        if(x<0 || x>=grid.size() || y<0 || y>=grid[0].size() || grid[x][y]==0)
        {
            return 0;
        }
        grid[x][y]=0;
        int left=DFS(grid,x-1,y);
        int right=DFS(grid,x+1,y);
        int down=DFS(grid,x,y-1);
        int top=DFS(grid,x,y+1);
        return 1+left+right+top+down;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        
        int count{};
        for(int i{};i<n;i++)
        {
            for(int j{};j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    count=max(count,DFS(grid,i,j));
                }
            }
        }
        return count;
        
    }
};