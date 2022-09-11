class Solution {
public:
    int dp[101][101];
    int solve(vector<vector<int>>& v,int i,int j)
    {
        if(i>=0 && j>=0 && v[i][j]==1)
        {
            return 0;
        }
        if(i==0 && j==0)
        {
            return 1;
        }
        if(i<0 || j<0)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int up=solve(v,i-1,j);
        int left=solve(v,i,j-1);
        return dp[i][j]=up+left;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& v) 
    {
        memset(dp,-1,sizeof(dp));
        int n=v.size();
        int m=v[0].size();
        return solve(v,n-1,m-1);
        
    }
};