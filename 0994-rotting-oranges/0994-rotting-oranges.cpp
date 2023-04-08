class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        
        int vis[n][m];
        int fresh{};
        queue<pair<pair<int,int>,int>>q;
        for(int i{};i<n;i++)
        {
            for(int j{};j<m;j++)
            {
                if(grid[i][j]==2)
                {
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
                else
                {
                    vis[i][j]=0;
                }
                if(grid[i][j]==1)
                {
                    fresh++;
                }
            }
        }
        int totaltime{};
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        int count{};
        while(!q.empty())
        {
            int r=q.front().first.first;
            int c=q.front().first.second;
            int t=q.front().second;
            q.pop();
            totaltime=max(t,totaltime);
            for(int i{};i<4;i++)
            {
                int newrow=r+delrow[i];
                int newcol=c+delcol[i];
                if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && vis[newrow][newcol]==0 && grid[newrow][newcol]==1)
                {
                    q.push({{newrow,newcol},t+1});
                    vis[newrow][newcol]=2;
                    count++;
                }
            }
            
        }
        if(count!=fresh)
        {
            return -1;
        }
        return totaltime;

            
    }
};