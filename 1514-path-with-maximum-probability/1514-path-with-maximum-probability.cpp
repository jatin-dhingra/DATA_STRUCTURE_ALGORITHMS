class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& pro, int start, int end) 
    {
        
        vector<vector<pair<int,double>>>adj(n);
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back({edges[i][1],pro[i]});
            adj[edges[i][1]].push_back({edges[i][0],pro[i]});
        }
        queue<int>q;
        vector<double>dis(n,0.0);
        dis[start]=1.0;
        q.push(start);
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            for(auto it:adj[node])
            {
               if( dis[it.first]<dis[node]*it.second)
               {
                   dis[it.first]=dis[node]*it.second;
                   q.push(it.first);
               }
            }
        }
        
        return dis[end];
    }
};