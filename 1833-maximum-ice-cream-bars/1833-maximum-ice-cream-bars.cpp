class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) 
    {
        int n=costs.size();
        sort(costs.begin(),costs.end());
        
        int count{};
        for(int i{};i<n;i++)
        {
            if(costs[i]<=coins)
            {
                count++;
                coins-=costs[i];
            }
        }
        return count;
        
    }
};