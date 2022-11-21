class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& e) 
    {
        
        vector<int>x={1,-1,0,0};
        vector<int>y={0,0,-1,1};
        queue<pair<int,int>>q;
        int n=maze.size();
        int m=maze[0].size();
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        q.push({e[0],e[1]});
        vis[e[0]][e[1]]=1;
        
        int count{};
        while(!q.empty())
        {
            int s=q.size();
            count++;
            for(int i{};i<s;i++)
            {
                int xx=q.front().first;
                int yy=q.front().second;
                q.pop();
                for(int j{};j<4;j++)
                {
                    int xnew=xx+x[j];
                    int ynew=yy+y[j];
                    if(xnew>=0 && ynew>=0 && xnew<n && ynew<m)
                    {
                        if(maze[xnew][ynew]!='.')
                        {
                            continue;
                        }
                        if(vis[xnew][ynew])
                        {
                            continue;
                        }
                        if(xnew==0 || ynew==0 || xnew==n-1 || ynew==m-1)
                        {
                            return count;
                        }
                        vis[xnew][ynew]=1;
                        q.push({xnew,ynew});
                    }
                }
            }
        }
        
        return -1;
        
    }
};