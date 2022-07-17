class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int n=nums.size();
        if(n==1)
        {
            return nums[0];
        }
        if(nums[0]<nums[n-1])
        {
            return nums[0];
            
            
        }
        int s=0;
        int ans=INT_MAX;
        int e=n-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]>=nums[0])
            {
                s=mid+1;
            }
            else
            {
                ans=min(ans,nums[mid]);
                e=mid-1;
            }
        }
        return ans;
        
        
    }
};