class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int ans{INT_MIN};
        int sum{};
        
        for(auto i:nums)
        {
            sum+=i;
           
            ans=max(sum,ans);
             sum=max(sum,0);
        }
        return ans;
        
    }
};