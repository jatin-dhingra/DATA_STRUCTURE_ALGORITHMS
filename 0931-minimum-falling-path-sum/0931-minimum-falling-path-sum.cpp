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
        int down=mat[i][j]+solve(mat,i+1,j);
        int left=mat[i][j]+solve(mat,i+1,j-1);
        int right=mat[i][j]+solve(mat,i+1,j+1);
        return dp[i][j]=min({down,left,right});
    }
    int minFallingPathSum(vector<vector<int>>& mat) 
    {
        int n=mat.size();
        int ans{INT_MAX};
        memset(dp,-1,sizeof(dp));
        for(int j{};j<n;j++)
        {
            ans=min(ans,solve(mat,0,j));
        }
        return ans;
        
        
    }
};