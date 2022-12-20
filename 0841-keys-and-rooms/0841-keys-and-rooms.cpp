class Solution {
public:
    void dfs(vector<int>adj[],vector<int>&vis,int ind)
    {
        vis[ind]=1;
        for(auto it:adj[ind])
        {
            if(!vis[it])
            {
                dfs(adj,vis,it);
               
            }
                
            
        }
      
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) 
    {
        int n=rooms.size();
        vector<int>adj[n];
        int check{};
        for(int i{};i<n;i++)
        {
            for(int j{};j<rooms[i].size();j++)
            {
                adj[i].push_back(rooms[i][j]);
            }
        }
        vector<int>vis(n,0);
        for(int i{};i<n;i++)
        {
           if(!vis[i])
           {
               check++;
                dfs(adj,vis,i);
           }
        }
        return check==1;
    }
};