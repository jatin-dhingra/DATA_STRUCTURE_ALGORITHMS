class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& r, vector<vector<int>>& b)
    {
        
        vector<pair<int,int>>ad[n];
        for(int i=0;i<r.size();i++)
        {
            ad[r[i][0]].push_back({r[i][1],1});
        }                           
        for(int i=0;i<b.size();i++)
        {
            ad[b[i][0]].push_back({b[i][1],0});
        } 
        vector<int>dis(n,-1);
        dis[0]=0;
        queue<vector<int>>q;
        q.push({0,0,-1});
        vector<vector<bool>>v(n,vector<bool>(2));
        v[0][1]=true;
        v[0][0]=true;
        while(!q.empty())
        {
          auto x = q.front();
          int node = x[0];
          int step = x[1];
          int prev = x[2];
          q.pop();
          for(auto&[ne,co] : ad[node])
          {
              if(!v[ne][co] && co!=prev)
              {
                  v[ne][co]=true;
                  q.push({ne,1+step,co});
                  if(dis[ne]==-1)
                  {
                      dis[ne] =1+step;
                  }
              }
          }
        }
        return dis;
    }
};