class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) 
    {
        
        int sum=accumulate(nums.begin(),nums.end(),0);
        int n=nums.size();
        int maxsum=nums[0];
        int currmax=nums[0];
        int minsum=nums[0];
        int currmin=nums[0];
        int maxval=*max_element(nums.begin(),nums.end());
        if(maxval<=0)
        {
            return maxval;
        }
        for(int i{1};i<n;i++)
        {
            currmax=max(nums[i],currmax+nums[i]);
            maxsum=max(maxsum,currmax);
            currmin=min(nums[i],currmin+nums[i]);
            minsum=min(minsum,currmin);
        }
        
        return max(maxsum,sum-minsum);
        
    }
};