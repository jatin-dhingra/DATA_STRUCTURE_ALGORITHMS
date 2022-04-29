class Solution {
    public:
        bool isBipartite(vector<vector<int>>& graph) 
        {
            vector<int> groups(graph.size()); 
            for(int i = 0; i < graph.size(); ++i)
                if(groups[i] == 0 && !assign_group(graph, i, 1, groups)) 
                    return false;
            return true;
        }
    
    protected:
        bool assign_group(vector<vector<int>>& graph, int i, int group, vector<int>& groups)
        {
            if(groups[i] == -group) return false; 
            if(groups[i] == group) return true; 
            groups[i] = group;
            for(int n : graph[i]) 
                if(!assign_group(graph, n, -group, groups)) return false; 
            return true;
        }
};