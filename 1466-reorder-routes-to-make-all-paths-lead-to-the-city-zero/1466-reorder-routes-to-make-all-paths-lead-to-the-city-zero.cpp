class Solution {
public:
    int ans=0;
    void dfs(vector<pair<int,int>>adj[],int src,vector<int>&vis)
    {
        vis[src]=1;
        for(auto it:adj[src])
        {
            if(!vis[it.first])
            {
                if(it.second==1) ans++;
                dfs(adj,it.first,vis);
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<pair<int,int>>adj[n];
        for(auto it:connections)
        {
            adj[it[0]].push_back({it[1],1});
            adj[it[1]].push_back({it[0],0});
        }
        vector<int>vis(n,0);
        dfs(adj,0,vis);
        return ans;
    }
};