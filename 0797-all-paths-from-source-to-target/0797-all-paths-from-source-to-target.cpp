class Solution {
public:
    vector<vector<int>>ans;
    vector<int>v;
    void dfs(vector<int>adj[],int ind,int des)
    {
        v.push_back(ind);
        if(ind==des)
        {
            ans.push_back(v);
        }
        for(auto i:adj[ind])
        {
            dfs(adj,i,des);
        }
        v.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) 
    {
        int n=graph.size();
        vector<int>adj[n];
        for(int i{};i<n;i++)
        {
            for(int j{};j<graph[i].size();j++)
            {
                adj[i].push_back(graph[i][j]);
                
            }
        }
        
        int sr=0;
        int des=n-1;
        dfs(adj,0,des);
        return ans;
    }
};