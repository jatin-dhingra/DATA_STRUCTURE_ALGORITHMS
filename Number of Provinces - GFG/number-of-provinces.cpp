//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  void dfs(vector<int>ad[],vector<int>&vis,int ind,int n)
  {
      vis[ind]=1;
      for(auto it:ad[ind])
      {
          if(!vis[it])
          {
              dfs(ad,vis,it,n);
          }
      }
  }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        int n=V;
        vector<int>ad[n];
        for(int i{};i<n;i++)
        {
            for(int j{};j<n;j++)
            {
                if(adj[i][j] && i!=j)
                {
                    ad[i].push_back(j);
                    ad[j].push_back(i);
                }
            }
        }
        int count{};
        vector<int>vis(n,0);
        for(int i{};i<n;i++)
        {
            if(!vis[i])
            {
                count++;
                dfs(ad,vis,i,n);
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