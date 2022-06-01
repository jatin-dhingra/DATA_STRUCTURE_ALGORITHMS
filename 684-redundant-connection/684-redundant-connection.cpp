class Solution {
public:
    
    bool dfs(int node,int parent,vector<int>&vis,vector<vector<int>>&adj)
    {
        vis[node]=1;
        
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                if(dfs(it,node,vis,adj))
                {
                    return true;
                }
                
            }
            else if(it!=parent)
            {
                return true;
            }
        }
        return false;
    }
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) 
    {
        int n=edges.size();
        vector<vector<int>>adj(n+1);
        vector<int>vis(n+1,0);
        
        for(auto i:edges)
        {
            fill(begin(vis),end(vis),0);
            int u=i[0];
            int v=i[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
            if(dfs(u,-1,vis,adj))
            {
                return i;
            }
            
        }
        return {};
        
    }
};