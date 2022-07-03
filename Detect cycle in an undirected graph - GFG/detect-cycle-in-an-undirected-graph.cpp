// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool DFS(vector<int>adj[],vector<int>&vis,int node,int parent)
    {
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(vis[it]==0)
            {
                if(DFS(adj,vis,it,node))
                {
                    return true;
                }
            }
            else if(it!=parent)
            {
                return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        
        vector<int>vis(V,0);
        
        for(int i{};i<V;i++)
        {
            if(!vis[i])
            {
                if(DFS(adj,vis,i,-1))
                {
                    return true;
                }
            }
        }
        return false;
        
    }
};

// { Driver Code Starts.
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
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends