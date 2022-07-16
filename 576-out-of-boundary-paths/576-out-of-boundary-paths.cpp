class Solution {
public:
    int dp[55][55][55];
    long long mod = 1e9 + 7;
    int DFS(int x, int y, int n, int m, int move){
        
        if(x < 0 || x >= n || y < 0 || y >= m)
        {
            return 1;
        }
            
        if(move<= 0)
        {
            return 0;
        }
        if(dp[x][y][move] != -1)
        {
            return dp[x][y][move];
        }
        
        int up = DFS(x-1,y,n,m,move-1);
        int down = DFS(x+1,y,n,m,move-1);
        int left = DFS(x,y-1,n,m,move-1);
        int right = DFS(x,y+1,n,m,move-1);
        int ans = (up % mod + down % mod + left % mod + right % mod) % mod;
        dp[x][y][move] = ans;
        return dp[x][y][move];
    }
    
    int findPaths(int n, int m, int maxMove, int row, int col) {
        memset(dp, -1, sizeof(dp));
        return DFS(row,col,n,m,maxMove);
    }
};