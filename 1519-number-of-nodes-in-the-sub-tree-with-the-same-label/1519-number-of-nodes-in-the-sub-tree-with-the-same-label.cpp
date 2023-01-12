class Solution {
public:

    vector<int> dfs(vector<int>adj[],string& label,vector<int>&vis,vector<int>&ans,int node)
    {
        vector<int>res(26,0);
        vis[node]=1;
        res[label[node]-'a']++;
        for(auto &i:adj[node])
        {
            if(!vis[i])
            {
                vector<int>temp=dfs(adj,label,vis,ans,i);
                for(int i=0;i<26;i++)
                {
                    res[i]+=temp[i];
                }
            }
        }
        ans[node]=res[label[node]-'a'];
        return res;
    }

    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        vector<int>adj[n];
        vector<int>count(26,0);
        vector<int>vis(n,0);
        vector<int>ans(n,0);
      
        for(auto i:edges)
        {
            
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
       
        dfs(adj,labels,vis,ans,0);
        return ans;
    }
};