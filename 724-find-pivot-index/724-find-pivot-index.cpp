class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int n=nums.size();
        int pre[n],suf[n];
        pre[0]=nums[0];
        suf[n-1]=nums[n-1];
        int sum=accumulate(nums.begin(),nums.end(),0);
        int currsum{};
        
        for(int i{};i<n;i++)
        {
            currsum+=nums[i];
            if(sum==currsum)
            {
                return i;
            }
            else
            {
                sum-=nums[i];
            }
            
        }
        
        return -1;
    }
};