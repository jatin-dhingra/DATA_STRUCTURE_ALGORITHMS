class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int currbal=INT_MAX;
        int profit=0;
        int n=prices.size();
        for(int i{};i<n;i++)
        {
            currbal=min(currbal,prices[i]);
            profit=max(profit,prices[i]-currbal);
        }
        return profit;
        
    }
};