class Solution {
public:
//     long long dp[201][201];
//     long long solve(int i,int j,vector<vector<int>>&grid)
//     {
//         if(i==0 && j==0)
//         {
//             return grid[i][j];
//         }
//         if(i<0 || j<0)
//         {
//             return INT_MAX-1;
//         }
//         if(dp[i][j]!=-1)
//         {
//             return dp[i][j];
//         }
            
//         long long left=grid[i][j]+solve(i-1,j,grid);
//         long long up=grid[i][j]+solve(i,j-1,grid);
//         return dp[i][j]=min(left,up);
//     }
    int minPathSum(vector<vector<int>>& grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        int dp[n][m];
        for(int i{};i<n;i++)
        {
            for(int j{};j<m;j++)
            {
                if(i==0 && j==0)
                {
                    dp[i][j]=grid[0][0];
                }
                else if(i==0 && j>0)
                {
                    dp[i][j]=dp[i][j-1]+grid[i][j];
                }
                else if(i>0 && j==0)
                {
                    dp[i][j]=dp[i-1][j]+grid[i][j];
                }
                else
                {
                    dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];
                }
            }
        }
        return dp[n-1][m-1];
        
    }
};