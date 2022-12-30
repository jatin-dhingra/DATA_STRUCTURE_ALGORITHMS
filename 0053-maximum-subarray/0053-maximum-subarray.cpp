class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int sum{};
        int ans{INT_MIN};
        int n=nums.size();
        for(int i{};i<n;i++)
        {
            sum+=nums[i];
            ans=max(sum,ans);
            sum=max(sum,0);
        }
        return ans;
        
    }
};