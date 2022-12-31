class Solution {
public:
    
    void dfs(vector<vector<int>> &grid, int r, int c, int m, int n, int count, int &ans){
      
        if(r>=m||r<0||c>=n||c<0||grid[r][c]==-1||grid[r][c] == -2){
            return;
        }
      
        if(grid[r][c] == 2)
        {
            if(count==0){
                ans++;
            }
            return;
        }
        
        grid[r][c] = -2;
        
        dfs(grid, r+1, c, m, n,count-1,ans);
        dfs(grid, r-1, c, m, n,count-1,ans);
        dfs(grid, r, c+1, m, n,count-1,ans);
        dfs(grid, r, c-1, m, n,count-1,ans);
        
        grid[r][c] = 0;

    }
    
    int uniquePathsIII(vector<vector<int>>& grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        int ans{};
        int count{};
        
        for(int i=0; i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==0 || grid[i][j]==2){
                    count++;
                }
            }
        }
        for(int i=0; i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j] == 1){
                    dfs(grid, i,j,m,n,count,ans);
                }
            }
        }
        return ans;
    }
};