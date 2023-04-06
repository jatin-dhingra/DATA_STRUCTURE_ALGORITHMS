class Solution {
public:
   
    bool dfs(vector<vector<int>>&grid,int i,int j)
    {
        if(grid[i][j]==1)
        {
            return true;
        }
        if(i<=0|| j<=0 || i>=grid.size()-1|| j>=grid[0].size()-1)
        {
            return false;
        }
        grid[i][j]=1;
       
        int right=dfs(grid,i+1,j);
        int left=dfs(grid,i-1,j);
        int up=dfs(grid,i,j+1);
        int down=dfs(grid,i,j-1);
        return (left && up && down && right);
    }
    int closedIsland(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        int count{};
        for(int i{};i<n;i++)
        {
            for(int j{};j<m;j++)
            {
                if(grid[i][j]==0  && i!=0 && j!=0 && i!=n-1 && j!=m-1)
                {
                    if(dfs(grid,i,j))
                    {
                        count++;
                    }
                }
            }
        }
        return count;
    }
};