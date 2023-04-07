class Solution {
public:
    void dfs(vector<vector<int>>&grid,int i,int j)
    {
        if(i<0 || i>=grid.size()|| j<0 || j>=grid[0].size() || grid[i][j]==0)
        {
            return;
        }
        
        grid[i][j]=0;
        
        dfs(grid,i,j-1);
        dfs(grid,i,j+1);
        dfs(grid,i-1,j);
        dfs(grid,i+1,j);
        
    }
    int numEnclaves(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        int count{};
        for(int i{};i<n;i++)
        {
            for(int j{};j<m;j++)
            {
                if((i==0 || j==0 || i==n-1 || j==m-1)&& grid[i][j]==1)
                {
                    dfs(grid,i,j);
                }
            }
        }
        for(int i{};i<n;i++)
        {
            for(int j{};j<m;j++)
            {
                if(grid[i][j]==1)
                {
                    count++;
                }
            }
        }
        return count;
    }
};