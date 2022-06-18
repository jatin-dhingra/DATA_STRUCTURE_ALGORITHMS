class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int ans{};
        int n=prices.size();
        
        for(int i{};i<n-1;i++)
        {
            ans+=max(prices[i+1]-prices[i],0);
            
        }
        return ans;
    }
};