class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k)
    {
        int m=grid.size();
        int n=grid[0].size();
        if(k==0){
            return grid;
        }
        vector<vector<int>>ans(m,vector<int>(n,0));
        while(k--)
        {
            for(int i{};i<m;i++)
            {
                for(int j{};j<n;j++)
                {
                    if(j==n-1)
                    {
                        if(i==m-1)
                        {
                            ans[0][0]=grid[i][j];
                        }
                        else
                        {
                            ans[i+1][0]=grid[i][j];
                        }

                    }
                    else
                    {
                        ans[i][j+1]=grid[i][j];
                    }
                }
            }
            grid=ans;
        }
        return ans;
        
    }
};