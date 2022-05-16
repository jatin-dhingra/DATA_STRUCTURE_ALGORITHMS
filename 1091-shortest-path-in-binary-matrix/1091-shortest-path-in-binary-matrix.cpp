class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) 
    {
        int n=grid.size();
        int m=grid[0].size();
        if(grid[0][0]==1)
        {
            return -1;
        }
        int ans{};
        queue<pair<int,int>>vq;
        vq.push({0,0});
        vector<int>v;
        // for(int i{};i<2;i++)
        // {
        //     v.push_back(0);
        // }
       // vq.push({0,0,1});
       // v.clear();
        
        grid[0][0]=1;
        vector<vector<int>>dir={{0,1},{1,0},{0,-1},{-1,0},{1,1},{1,-1},{-1,1},{-1,-1}};
        while(!vq.empty())
        {
            int r=vq.front().first;
            int c=vq.front().second;
            if(r==n-1 && c==m-1)
            {
                return grid[r][c];
            }
            for(auto i:dir)
            {
                int newr=r+i[0];
                int newc=c+i[1];
               if(newr>=0 && newc>=0 && newr<n && newc<m && grid[newr][newc]==0)
                {
                    vq.push({newr,newc});
                    grid[newr][newc]=grid[r][c]+1;
                }
            }
            vq.pop();
        }
        return -1;
        
    }
};