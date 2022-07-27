class Solution {
public:
    int dp[101][101];
    int solve(int x,int y,int m,int n)
    {
        if(x<0 || y<0)
        {
            return dp[x][y]=0;
        }
        if(x>m || y>n)
        {
            return 0;
        }
        
        if(dp[x][y]!=-1)
        {
            return dp[x][y];
        }
        if(x==m-1 && y==n-1)
        {
            return dp[x][y]=1;
        }
        return dp[x][y]=solve(x+1,y,m,n)+solve(x,y+1,m,n);
            
    }
    int uniquePaths(int m, int n) 
    {
        memset(dp,-1,sizeof(dp));
        int ans=solve(0,0,m,n);
        return ans;
        
        
    }
};