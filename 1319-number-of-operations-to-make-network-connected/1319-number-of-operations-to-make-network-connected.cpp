class Solution {
public:
    void dfs_traversal(vector<vector<int>>& adj , vector<bool>& visited , int start){
        visited[start]=true;
        for(auto it : adj[start])
        {
            if(!visited[it]){
                dfs_traversal(adj , visited , it );
            }
        }
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(n>connections.size()+1)
            return -1;
        
        vector<vector<int>> adj(n);
        for(auto con : connections){
            adj[con[0]].push_back(con[1]);
            adj[con[1]].push_back(con[0]);
        }
        vector<bool> visited(n ,false);
        int component=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                component++;
                dfs_traversal(adj , visited , i);
            }
        }
        return component-1;
    }
};