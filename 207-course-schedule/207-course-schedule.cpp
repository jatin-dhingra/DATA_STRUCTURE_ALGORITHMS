class Solution {
public:
    bool cycle(vector<int>adj[],vector<int>&vis,vector<int>&dfsvis,int node)
    {
        vis[node]=1;
        dfsvis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                if(cycle(adj,vis,dfsvis,it))
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
    
    bool canFinish(int num, vector<vector<int>>& pre) 
    {
        int n=num;
        vector<int>adj[n];
        for(auto i:pre)
        {
            adj[i[1]].push_back(i[0]);
        }
        vector<int>vis(n,0),dfsvis(n,0);
        
        for(int i{};i<n;i++)
        {
            if(!vis[i])
            {
                if(cycle(adj,vis,dfsvis,i))
                {
                    return false;
                }
            }
        }
        return true;
        
    }
};