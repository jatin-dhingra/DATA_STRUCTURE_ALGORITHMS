class DSU 
{
private:
    vector<int> parent;
    vector<int> rank;
public:

    DSU(int size)
	{
        parent.resize(size, 0);
        rank.resize(size, 0);
        for (int i{}; i < size; ++i) 
        {
            parent[i] = i;
        }
    }
    
    int find(int x) 
    {
        if(parent[x]==x) return x;
        
        return parent[x]= find(parent[x]);
    }
    
    void union_(int x, int y) 
    {
        int pX = find(x);
        int pY = find(y);
        if (pX == pY) return;
        if (rank[pX] > rank[pY]) 
        {
            parent[pY] = pX;
        }
        else if (rank[pX] < rank[pY]) 
        {
            parent[pX] = pY;
        }
        else 
        {
            parent[pY] = pX;
            rank[pX]++;
        }
    }
    
};
class Solution {
public:
    int numberOfGoodPaths(vector<int>& vals, vector<vector<int>>& edges) {
        int n = vals.size();
        vector<vector<int>> graph(n);
        map<int, vector<int>> m1;
        for (int i = 0; i < n; ++i) 
        {
            m1[vals[i]].push_back(i);
        }
        for (auto& e : edges) 
        {
            int a = e[0];
            int b = e[1];
         
            if (vals[a] >= vals[b]) {
                graph[a].push_back(b);
            }
            if (vals[a] <= vals[b]) {
                graph[b].push_back(a);
            }
        }
        
        DSU*d = new DSU(n);
        
        int ans = 0;
  
        for (auto& element : m1) 
        {
            int value = element.first;
            
            for (auto& node : element.second) 
            {
                for (auto& nbr : graph[node]) 
                {
                    d->union_(node, nbr);
                }
            }
           
            unordered_map<int, int> m2;

            for (auto& node : element.second) 
            {
                m2[d->find(node)]++;
            }
            
            ans += element.second.size();
            
         
            for (auto& [groupID, sz] : m2) 
            {
                if (sz > 1) 
                {
                    ans += (sz * (sz - 1)) / 2;
                }
            }
        }
        return ans;
    }
};