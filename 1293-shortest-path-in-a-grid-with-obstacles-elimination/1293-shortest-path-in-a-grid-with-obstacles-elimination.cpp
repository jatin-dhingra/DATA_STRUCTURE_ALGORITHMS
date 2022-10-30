class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) 
    {
        int n = grid.size();
        int m = grid[0].size();
        int vis[n][m];
        memset(vis,-1,sizeof(vis));
        queue<vector<int>> q;
        q.push({0, 0, 0, k});
        
        while (!q.empty())
        {
            vector<int>v=q.front();
            int x = v[0], y = v[1], len = v[2], obs = v[3];
            q.pop();
            
            if (x < 0 || y < 0 || x >= n || y >= m)
                continue;
            
            if (x == n - 1 && y == m - 1)
                return len;
            
            if (grid[x][y] == 1)
            {
                if (obs > 0)
                    obs--;
                else
                    continue;
            }
            
            if (vis[x][y] < obs)
            {
                vis[x][y] = obs;
                q.push({x + 1, y, len + 1, obs});
                q.push({x - 1, y, len + 1, obs});
                q.push({x, y + 1, len + 1, obs});
                q.push({x, y - 1, len + 1, obs});    
            }
        }
        return -1;
        
    }
};