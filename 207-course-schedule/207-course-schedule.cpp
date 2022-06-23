class Solution {
public:
    
    bool DFS(vector<int>adj[],vector<int>&vis,vector<int>&dis,int node)
    {
        vis[node]=1;
        dis[node]=1;
        
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                if(DFS(adj,vis,dis,it))
                {
                    return true;
                }
            }
            else if(dis[it])
            {
                return true;
            }
        }
        dis[node]=0;
        return false;
        
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& pre) 
    {
        int n=numCourses;
        
        vector<int>adj[n+1];
        for(auto i:pre)
        {
            adj[i[1]].push_back(i[0]);
        }        
        vector<int>vis(n+1,0);
        vector<int>dis(n+1,0);
        
        for(int i{};i<n;i++)
        {
            if(!vis[i])
            {
                if(DFS(adj,vis,dis,i))
                {
                    return false;
                }
            }
        }
        return true;
        
    }
};