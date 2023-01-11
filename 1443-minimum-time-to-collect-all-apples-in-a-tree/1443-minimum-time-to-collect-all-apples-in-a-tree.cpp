class Solution {
public:
    int dfs(vector<int>adj[],vector<int>&vis,vector<bool>&app,int edge)
    {
        vis[edge]=1;
        int ans{};
        
        for(auto &i:adj[edge])
        {
            if(!vis[i])
            {
                ans+=dfs(adj,vis,app,i);
            }
        }
        if(app[edge]|| ans>0)
        {
            return ans+1;
        }
        return 0;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& app)
    {
        
        vector<int>adj[n];
        vector<int>vis(n+1,0);
        for(auto i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        
        int ans=dfs(adj,vis,app,0);
        return ans==0?0:2*(ans-1);
    }
};