class Solution {
public:
    int lengthOfLIS(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>dp(n,1);
        for(int i{};i<n;i++)
        {
            for(int j{};j<i;j++)
            {
                if(nums[i]>nums[j] && dp[i]<dp[j]+1)
                {
                    dp[i]=dp[j]+1;
                }
            }
        }
        int maxx{};
        maxx=*max_element(dp.begin(),dp.end());
        return maxx;
        
    }
};