class Solution {
public:
    bool cycle(int sr,vector<int>adj[],vector<int>&vis,vector<int>&previs)
    {
        vis[sr]=1;
        previs[sr]=1;
        for(auto i:adj[sr])
        {
            if(!vis[i])
            {
                if(cycle(i,adj,vis,previs))
                {
                    return true;
                }
            }
            else if(previs[i])
            {
                return true;
            }
        }
        previs[sr]=0;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& pre) 
    {
        int n=numCourses;
        vector<int>adj[n];
        vector<int>vis(n+1,0);
        vector<int>previs(n+1,0);
        for(auto i:pre)
        {
            adj[i[1]].push_back(i[0]);
        }
        for(int i{};i<n;i++)
        {
            if(!vis[i])
            {
                if(cycle(i,adj,vis,previs))
                {
                    return false;
                }
            }
        }
        
        return true;
    }
};