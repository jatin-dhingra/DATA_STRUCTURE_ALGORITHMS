class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int buy{INT_MAX};
        int sell{INT_MIN};
        int ans{};
        int n=prices.size();
        for(int i{};i<n;i++)
        {
            buy=min(buy,prices[i]);
            sell=max(sell,prices[i]-buy);
            
        }
        return sell;
        
    }
};