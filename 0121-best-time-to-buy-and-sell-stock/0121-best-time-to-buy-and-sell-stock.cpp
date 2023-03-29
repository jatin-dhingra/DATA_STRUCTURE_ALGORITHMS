class Solution {
public:
    int maxProfit(vector<int>& p) 
    {
        int ans{INT_MAX},profit{INT_MIN};
        int n=p.size();
        for(int i{};i<n;i++)
        {
            ans=min(p[i],ans);
            profit=max(profit,p[i]-ans);
        }
        return profit!=INT_MIN?profit:0;
        
    }
};