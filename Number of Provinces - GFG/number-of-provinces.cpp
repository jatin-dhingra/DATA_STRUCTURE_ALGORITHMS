//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void dfs(vector<int>vec[],int ind,vector<int>&vis)
    {
        vis[ind]=1;
        for(auto it:vec[ind])
        {
            if(!vis[it])
            {
                dfs(vec,it,vis);
            }
        }
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        int n=adj.size();
        int m=adj[0].size();
        vector<int>vec[V];
        vector<int>vis(V+1,0);
        for(int i{};i<V;i++)
        {
            for(int j{};j<V;j++)
            {
                if(adj[i][j]==1 && i!=j)
                {
                    vec[i].push_back(j);
                    vec[j].push_back(i);
                }
            }
        }
        int count{};
        for(int i{};i<V;i++)
        {
            if(!vis[i])
            {
                count++;
                dfs(vec,i,vis);
            }
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends