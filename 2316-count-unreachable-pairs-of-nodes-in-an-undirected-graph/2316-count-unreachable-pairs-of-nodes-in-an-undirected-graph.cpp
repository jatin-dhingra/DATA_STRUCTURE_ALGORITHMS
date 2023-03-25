class Solution {
    int c;
    void countNodeDfs(vector<bool> &vis,vector<int> adj[],int node){
        vis[node]=1;
        c++;
        for(auto it:adj[node]){
            if(!vis[it]){
                countNodeDfs(vis,adj,it);
            }
        }
    }
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        vector<int> nodecount;
        vector<bool> vis(n,false);
        vector<int> adj[n];
        for(auto edge:edges)
        {
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        for(int i=0;i<n;i++)
        {
            if(!vis[i]) {
                c = 0;
                countNodeDfs(vis,adj,i);
                nodecount.push_back(c);
            }
        }
        long long ans{},sum{};
        
        for(int ind:nodecount){
            sum+=ind;
            ans+=ind*(n-sum);
        }
        return ans;
    }
};