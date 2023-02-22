class Solution {
public:
    int dp[101][101];
    int solve(int x,int y)
    {
        if(x==0 && y==0)
        {
            return 1;
        }
        if(x<0 || y<0)
        {
            return 0;
        }
        if(dp[x][y]!=-1)
        {
            return dp[x][y];
        }
        int left=solve(x-1,y);
        int up=solve(x,y-1);
        return dp[x][y]=left+up;
    }
    int uniquePaths(int m, int n)
    {
        memset(dp,-1,sizeof(dp));
        return solve(m-1,n-1);
    }
};