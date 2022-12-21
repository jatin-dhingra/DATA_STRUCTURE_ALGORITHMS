class Solution {
public:
    bool dfs(vector<int>adj[],vector<int>&vis,int ind,int node)
    {
        vis[ind]=node;
        for(auto it:adj[ind])
        {
            if(vis[it]==-1)
            {
                dfs(adj,vis,it,!node);
            }
            else if(vis[it]==node)
            {
                return false;
            }
        }
        return true;
    }
    bool possibleBipartition(int n, vector<vector<int>>& d) 
    {
        int m=d.size();
        vector<int>adj[n+1];
        vector<int>vis(n+1,-1);
        
        for(int i{};i<m;i++)
        {
            adj[d[i][0]].push_back(d[i][1]);
            adj[d[i][1]].push_back(d[i][0]);
        }
        for(int i{1};i<=n;i++)
        {
            if(vis[i]==-1)
            {
                if(!dfs(adj,vis,i,1))
                {
                    return false;
                }
            }
        }
        return true;
    }
};