class Solution {
public:
    int numIslands(vector<vector<char>>& grid)
    {
        int m=grid.size();
        int n=grid[0].size();
        int count{};
        for(int i{};i<m;i++)
        {
            for(int j{};j<n;j++)
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
    
    void DFS(vector<vector<char>>& grid,int x,int y)
    {
        if(x<0 || y<0 || x>=grid.size() || y>=grid[0].size() || grid[x][y]=='0')
        {
            return;
        }
        grid[x][y]='0';
        DFS(grid,x+1,y);
        DFS(grid,x-1,y);
        DFS(grid,x,y+1);
        DFS(grid,x,y-1);
    }
};