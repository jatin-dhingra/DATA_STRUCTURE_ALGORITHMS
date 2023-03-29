class Solution {
public:
    int maximumDifference(vector<int>& nums) 
    {
        int n=nums.size();
        int ans=-1;
        for(int i{};i<n;i++)
        {
            for(int j{i+1};j<n;j++)
            {
                if(nums[i]<nums[j])
                    ans=max(ans,nums[j]-nums[i]);
            }
        }
        
        return ans;
    }
};