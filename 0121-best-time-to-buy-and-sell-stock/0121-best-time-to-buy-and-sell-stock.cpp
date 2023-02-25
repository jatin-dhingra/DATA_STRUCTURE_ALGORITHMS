class Solution {
public:
    int maxProfit(vector<int>& p) 
    {
        int buy{INT_MAX},sell{INT_MIN};
        int n=p.size();
        for(int i{};i<n;i++)
        {
            buy=min(buy,p[i]);
            sell=max(sell,p[i]-buy);
        }
        return sell;
        
    }
};