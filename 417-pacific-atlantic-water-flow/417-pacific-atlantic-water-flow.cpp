class Solution {
public:
    vector<vector<int>> pac,atl;
    vector<vector<int>> ans,arr;
    int n,m;
    void dfs(int i,int j,vector<vector<int>> &vis)
    {
        if(vis[i][j]==1)
            return;
        vis[i][j]++;
        if(pac[i][j] && atl[i][j]){
            ans.push_back({i, j});
        }
        if(i+1 < n && arr[i+1][j] >= arr[i][j])
        {
            dfs(i+1, j, vis);
        }
        if(i-1 >= 0 && arr[i-1][j] >= arr[i][j])
        {
            dfs(i-1, j, vis);
        }
    
        if(j+1 < m && arr[i][j+1] >= arr[i][j])
        {
            dfs(i, j+1, vis);
        }
        if(j-1 >= 0 && arr[i][j-1] >= arr[i][j])
        {
            dfs(i, j-1, vis);
        }
            
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& arr) {
        this->arr = arr;
        n = arr.size(), m = arr[0].size();
        pac = atl = vector<vector<int>>(n,vector<int>(m));
        for(int i = 0;i < n;i++)
        {
            dfs(i, 0, pac);
            dfs(i, m-1, atl);
        }
        for(int i = 0;i < m;i++)
        {
            dfs(0, i, pac);
            dfs(n-1, i, atl);
        }
        return ans;
    }
};