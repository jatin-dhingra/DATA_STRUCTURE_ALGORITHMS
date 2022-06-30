class Solution {
public:
    bool DFS(vector<int>adj[],vector<int>&vis,vector<int>&dfsvis,int node)
    {
        vis[node]=1;
        dfsvis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                if(DFS(adj,vis,dfsvis,it))
                {
                    return true;
                }
            }
            else if(dfsvis[it])
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
        for(auto i:pre)
        {
            adj[i[1]].push_back(i[0]);
        }
        
        vector<int>vis(n,0);
        vector<int>dfsvis(n,0);
        
        for(int i{};i<n;i++)
        {
            if(!vis[i])
            {
                if(DFS(adj,vis,dfsvis,i))
                {
                    return false;
                }
            }
        }
        return true;
    }
};