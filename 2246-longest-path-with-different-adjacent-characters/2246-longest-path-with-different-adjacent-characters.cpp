class Solution {
    int dist[100005],ans = 1;
public:
    void dfs(int node, int prev, vector<int>adj[],string &s)
    {
        dist[node] = 1;
        for(auto child: adj[node]){
            if(child != prev){
                dfs(child, node, adj, s);
                if(s[child] != s[node]){
                    ans = max(ans, dist[child] + dist[node]);
                    dist[node] = max(dist[node], dist[child] + 1);
                }else{
                    ans = max(ans, dist[child]);
                }
            }
        }
    }
    
    int longestPath(vector<int>& p, string s) {
        int n=p.size();
        vector<int>adj[n];
        for(int i=1;i<n;i++)
        {
            adj[i].push_back(p[i]);
            adj[p[i]].push_back(i);
        }
        dfs(0,-1,adj,s);
        return ans;
    }
};