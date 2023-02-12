class Solution {
public:
    vector<vector<int>> edges;
    vector<bool> visit;
    long long ret=0;
    int count(int cur,int k)
    {
        int cnt=1;
        visit[cur]=true;
        for(auto i:edges[cur])
        {
            if(visit[i]==false)
            {
                cnt+=count(i,k);
            }
        }
        if(cur!=0)
        {
            ret+=((cnt+k-1)/k);
        }
        return cnt;
    }

    long long minimumFuelCost(vector<vector<int>>& r, int seats)
    {
        int n=r.size();
        edges.resize(n+1);
        visit.resize(n+1);
        for(auto i:r){
            edges[i[0]].push_back(i[1]);
            edges[i[1]].push_back(i[0]);
        }
        count(0,seats);
        return ret;
    }
};