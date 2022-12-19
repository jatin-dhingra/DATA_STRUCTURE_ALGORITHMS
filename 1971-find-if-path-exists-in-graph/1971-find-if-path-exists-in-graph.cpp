class Solution {
public:
    int check{};
    void dfs(vector<vector<int>>&adj,vector<int>&vis,int s,int d)
    {
        if(s==d)
        {
            check=1;
            return;
        }
        vis[s]=1;
        for(auto it:adj[s])
        {
            if(!vis[it])
            {
                dfs(adj,vis,it,d);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& e, int s, int d) 
    {
        vector<vector<int>>adj(n);
        int m=e.size();
        for(int i{};i<m;i++)
        {
            adj[e[i][0]].push_back(e[i][1]);
            adj[e[i][1]].push_back(e[i][0]);
        }
        vector<int>vis(n,0);
        dfs(adj,vis,s,d);
        return (check==1?1:0);
        
    }
};