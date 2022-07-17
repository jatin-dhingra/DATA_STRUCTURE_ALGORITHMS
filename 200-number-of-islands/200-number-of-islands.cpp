class Solution {
public:
    void DFS(int x,int y,vector<vector<char>>&grid)
    {
        if(x<0 || y<0 || x>=grid.size()|| y>=grid[0].size()|| grid[x][y]!='1')
        {
            return;
        }
        grid[x][y]='0';
        DFS(x+1,y,grid);
        DFS(x-1,y,grid);
        DFS(x,y-1,grid);
        DFS(x,y+1,grid);
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        int count{};
        
        for(int i{};i<n;i++)
        {
            for(int j{};j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    DFS(i,j,grid);
                    
                }
            }
        }
        return count;
        
    }
};