class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b)
    {
        return a[1]-a[0]>b[1]-b[0];
    }
    int twoCitySchedCost(vector<vector<int>>& costs) 
    {
        sort(costs.begin(),costs.end(),comp);
        int ans{};
        int n=costs.size();
        for(int i{};i<n;i++)
        {
            ans+=(i>=n/2?costs[i][1]:costs[i][0]);
        }
        return ans;
        
    }
};