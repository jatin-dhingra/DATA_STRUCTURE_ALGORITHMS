class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int sum{};
        int ans{INT_MIN};
        for(int i:nums)
        {
            sum+=i;
            ans=max(sum,ans);
            sum=max(sum,0);
            
        }
        return ans;
        
    }
};