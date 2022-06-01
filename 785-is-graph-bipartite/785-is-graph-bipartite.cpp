class Solution {
public:
    
    bool bfs(int node,vector<vector<int>>&graph,vector<int>&vis)
    {
        vis[node]=1;
        queue<int>q;
        q.push(node);
        while(!q.empty())
        {
            int val=q.front();
            q.pop();
            
            for(auto it:graph[val])
            {
                if(vis[it]==-1)
                {
                    vis[it]=1-vis[val];
                    q.push(it);
                }
                else if(vis[it]==vis[val])
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
                if(!bfs(i,graph,vis))
                {
                    return false;
                }
            }
        }
        return true;
        
    }
};