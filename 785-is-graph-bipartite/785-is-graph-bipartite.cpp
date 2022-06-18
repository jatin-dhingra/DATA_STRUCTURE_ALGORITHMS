class Solution {
public:
    bool BFS(vector<vector<int>>& graph,vector<int>&vis,int node)
    {
        vis[node]=1;
        
        queue<int>q;
        q.push(node);
        while(!q.empty())
        {
            int n=q.front();
            q.pop();
            for(auto it:graph[n])
            {
                if(vis[it]==-1)
                {
                    vis[it]=1-vis[n];
                    q.push(it);
                }
                else if(vis[it]==vis[n])
                {
                    return false;
                }
            }
        }
        return true;
        
    }
    
    bool isBipartite(vector<vector<int>>& graph) 
    {
        int n=graph.size();
        vector<int>vis(n+1,-1);
        
        
        for(int i{};i<n;i++)
        {
            if(vis[i]==-1)
            {
                if(!BFS(graph,vis,i))
                {
                    return false;
                }
            }
        }
        return true;
    }
};