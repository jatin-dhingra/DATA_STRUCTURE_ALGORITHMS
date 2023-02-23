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
        
        vector<int>prev(m,0);
        for(int i{};i<n;i++)
        {
            vector<int>curr(m,0);
            for(int j{};j<m;j++)
            {
                if(i==0 && j==0)
                {
                    curr[j]=grid[0][0];
                }
                else if(i==0 && j>0)
                {
                    curr[j]=curr[j-1]+grid[i][j];
                }
                else if(i>0 && j==0)
                {
                    curr[j]=prev[j]+grid[i][j];
                }
                else
                {
                    curr[j]=min(prev[j],curr[j-1])+grid[i][j];
                }
            }
            prev=curr;
        }
        return prev[m-1];
        
    }
};