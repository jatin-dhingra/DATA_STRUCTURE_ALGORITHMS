class Solution {
public:
    
    void DFS(vector<vector<char>>&grid,int x,int y)
    {
        if(x<0 || x>=grid.size() || y<0 || y>=grid[0].size() || grid[x][y]=='0')
        {
            return;
        }
        grid[x][y]='0';
        DFS(grid,x-1,y);
        DFS(grid,x+1,y);
        DFS(grid,x,y-1);
        DFS(grid,x,y+1);
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
                    DFS(grid,i,j);
                }
            }
        }
        return count;
        
    }
};