//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void DFS(vector<int>&dfs,vector<int>&vis,vector<int>adj[],int ind)
    {
        vis[ind]=1;
        dfs.push_back(ind);
        for(auto it:adj[ind])
        {
            if(!vis[it])
            {
                DFS(dfs,vis,adj,it);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int n=V;
        vector<int>dfs;
        
        vector<int>vis(n+1,0);
        for(int i{};i<n;i++)
        {
            if(!vis[i])
            {
                DFS(dfs,vis,adj,i);
            }
        }
        return dfs;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends