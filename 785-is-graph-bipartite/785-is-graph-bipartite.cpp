class Solution {
public:
    bool dfs(vector<vector<int>>&graph,int node,int col,vector<int>&vis)
    {
        vis[node]=col;
        for(auto it:graph[node])
        {
            if(vis[it]==-1)
            {
                vis[it]=1-vis[it];
                if(!dfs(graph,it,!col,vis))
                {
                    return false;
                }
            }
            else if(vis[it]==vis[node])
            {
                return false;
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) 
    {
        int n=graph.size();
        vector<int>vis(n,-1);
        
        for(int i{};i<n;i++)
        {
            if(vis[i]==-1)
            {
                if(!dfs(graph,i,0,vis))
                {
                    return false;
                }
            }
        }
        return true;
        
    }
};