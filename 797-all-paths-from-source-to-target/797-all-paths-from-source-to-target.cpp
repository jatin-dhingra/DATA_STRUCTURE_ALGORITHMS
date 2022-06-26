class Solution {
public:
    void DFS(vector<vector<int>>&graphs,vector<vector<int>>&ans,vector<int>&vis,int node)
    {
        vis.push_back(node);
        if(node==graphs.size()-1)
        {
            ans.push_back(vis);
        }
        else
            for(int i{};i<graphs[node].size();i++)
            {
                DFS(graphs,ans,vis,graphs[node][i]);
            }
        vis.pop_back();
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graphs) 
    {
        int n=graphs.size();
        vector<vector<int>>ans;
        vector<int>vis;
        
        vector<int>adj[n+1];
        
        // for(int i{};i<n;i++)
        // {
        //     adj[i[1]].push_back(i[0]);
        // }
        DFS(graphs,ans,vis,0);
        return ans;
    }
};