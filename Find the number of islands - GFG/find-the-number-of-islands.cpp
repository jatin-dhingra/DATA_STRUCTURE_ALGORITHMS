// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void DFS(vector<vector<char>>&grid,int x,int y)
    {
        if(x<0 || y<0 || x>=grid.size()|| y>=grid[0].size() || grid[x][y]=='0')
        {
            return;
        }
        grid[x][y]='0';
        DFS(grid,x-1,y);
        DFS(grid,x+1,y);
        DFS(grid,x,y-1);
        DFS(grid,x,y+1);
        DFS(grid,x-1,y-1);
        DFS(grid,x-1,y+1);
        DFS(grid,x+1,y+1);
        DFS(grid,x+1,y-1);
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        int count{};
        
        for(int i{};i<n;i++)
        {
            for(int j{};j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    DFS(grid,i,j);
                }
            }
        }
        return count;
    }

};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}  // } Driver Code Ends