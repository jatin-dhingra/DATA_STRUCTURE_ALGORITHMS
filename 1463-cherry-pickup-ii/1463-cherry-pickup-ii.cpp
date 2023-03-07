class Solution {
public:
   
//     int solve(int i,int j1,int j2,vector<vector<int>>&grid)
//     {
//         if(j1<0 || j1>grid[0].size()-1 || j2<0 || j2>grid[0].size()-1)
//         {
//             return -1e7;
//         }
//         if(i==grid.size()-1)
//         {
//             return (j1!=j2?(grid[i][j1]+grid[i][j2]):grid[i][j1]);
//         }
//         if(dp[i][j1][j2]!=-1)
//         {
//             return dp[i][j1][j2];
//         }
//         int ans{};
//         for(int jj1{-1};jj1<=1;jj1++)
//         {
//             for(int jj2{-1};jj2<=1;jj2++)
//             {
                
//                 if(j1==j2)
//                 {
//                     ans=max(grid[i][j1]+solve(i+1,j1+jj1,j2+jj2,grid),ans);
                    
//                 }
//                 else
//                 {
//                     ans=max(grid[i][j1]+grid[i][j2]+solve(i+1,j1+jj1,j2+jj2,grid),ans);
//                 }
//             }
//         }
       
//         return dp[i][j1][j2]=ans;
//     }
    int cherryPickup(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        int dp[n+1][m+1][m+1];
        for(int j1{};j1<m;j1++)
        {
            for(int j2{};j2<m;j2++)
            {
                dp[n-1][j1][j2]=(j1==j2?grid[n-1][j1]:grid[n-1][j1]+grid[n-1][j2]);
            }
        }
        
        for(int i=n-2;i>=0;i--)
        {
            for(int j{};j<m;j++)
            {
                for(int k{};k<m;k++)
                {
                   int val=-1e8;
                    for(int jj1{-1};jj1<=1;jj1++)
                    {
                        for(int jj2{-1};jj2<=1;jj2++)
                        {
                            int ans{};
                            if(j==k)
                            {
                                ans=grid[i][j];
                            }
                            else
                            {
                                ans=grid[i][j]+grid[i][k];
                                
                            }
                            if(j+jj1>=0 && j+jj1<m && k+jj2>=0  && k+jj2<m)
                            {
                                ans+=dp[i+1][j+jj1][k+jj2];
                            }
                            else
                            {
                                ans+=-1e8;
                            }
                            val=max(ans,val);
                        }
                    }
                    dp[i][j][k]=val;
                }
            }
        }
        return dp[0][0][m-1];
        
    }
};