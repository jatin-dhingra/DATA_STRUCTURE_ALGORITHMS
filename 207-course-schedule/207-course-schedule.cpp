class Solution {
public:
    bool DFS(vector<int>adj[],vector<int>&dfsvis,vector<int>&vis,int node)
    {
        vis[node]=1;
        dfsvis[node]=1;
        for(auto i:adj[node])
        {
            if(!vis[i])
            {
                if(DFS(adj,dfsvis,vis,i))
                {
                    return true;
                }
            }
            if(dfsvis[i])
            {
                return true;
            }
        }
        dfsvis[node]=0;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& pre) 
    {
        int n=numCourses;
        vector<int>adj[n+1];
        vector<int>vis(n+1,0);
        vector<int>dfsvis(n+1,0);
        for(auto i:pre)
        {
            adj[i[1]].push_back(i[0]);
        }
        
        for(int i{};i<n;i++)
        {
            if(!vis[i])
            {
                if(DFS(adj,dfsvis,vis,i))
                {
                    return false;
                }
            }
        }
        return true;
        
    }
};