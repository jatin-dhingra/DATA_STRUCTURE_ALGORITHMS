class Solution {
public:
    int dp[101][101];
    int solve(vector<vector<int>>&mat,int i,int j)
    {
        if(j<0 || j>=mat.size())
        {
            return 1e9;
        }
        if(i==mat.size()-1)
        {
            return mat[i][j];
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int left=mat[i][j]+solve(mat,i+1,j-1);
        int right=mat[i][j]+solve(mat,i+1,j+1);
        int bottom=mat[i][j]+solve(mat,i+1,j);
        return dp[i][j]=min({left,right,bottom});
    }
    int minFallingPathSum(vector<vector<int>>& mat) 
    {
        
        int n=mat.size();
        int ans{INT_MAX};
        memset(dp,-1,sizeof(dp));
        for(int i{};i<n;i++)
        {
           ans= min(solve(mat,0,i),ans);  
        }
        return ans;
        
    }
};