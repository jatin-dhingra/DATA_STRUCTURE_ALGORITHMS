class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int ans{INT_MIN};
        int sum{};
        for(auto i:nums)
        {
            sum+=i;
            ans=max(ans,sum);
            sum=max(sum,0);
        }
        return ans;
        
    }
};