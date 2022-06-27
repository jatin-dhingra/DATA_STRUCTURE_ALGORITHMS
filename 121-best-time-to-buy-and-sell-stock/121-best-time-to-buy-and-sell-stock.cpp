class Solution {
public:
    int maxProfit(vector<int>& nums) 
    {
        int ans{};
        int buy{INT_MAX},sell{INT_MIN};
        int n=nums.size();
        for(int i{};i<n;i++)
        {
            buy=min(nums[i],buy);
            sell=max(nums[i]-buy,sell);
        }
        return sell;
        
    }
};