class Solution {
public:
    void dfs(vector<int>& edges, int u, vector<int>& dist, int ind)
    {
        dist[u]=ind;
        
        if(edges[u]!=-1 && dist[edges[u]]==INT_MAX)
        {
            dfs(edges,edges[u], dist,ind+1);
        }
    }
    
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        
        int n = edges.size();
        vector<int> dist1(n, INT_MAX);
        
        dist1[node1]=0;
        
        dfs(edges, node1, dist1, 0);
        vector<int> dist2(n, INT_MAX);
        
        dist2[node2] = 0;
        dfs(edges, node2, dist2, 0);
        
        int mini{INT_MAX};
        
        int min_idx = -1;
        
        for(int i = 0; i < n; i++)
        {
            if(dist1[i] != INT_MAX && dist2[i] != INT_MAX)
            {
                int max_dist = max(dist1[i], dist2[i]);
                if(max_dist < mini)
                {
                    mini = max_dist;
                    min_idx = i;
                }
            }
        }
        return min_idx;
    }
};