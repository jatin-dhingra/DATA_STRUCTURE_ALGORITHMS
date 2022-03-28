class Solution {
public:
    bool search(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int i=0;
        int j=n-1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(nums[mid]==target)
            {
                return true;
            }
            if(nums[mid]>nums[i])
            {
                if(nums[mid]>target && nums[i]<=target)
                {
                    j=mid;
                }
                else
                {
                    i=mid+1;
                }
            }
            else if(nums[mid]<nums[i])
            {
                if(nums[mid]<target && nums[i]>target)
                {
                     i=mid+1;
                }
                else
                {
                   j=mid;
                }
            }
            else
            {
                i++;
            }
        }
        return false;
        
    }
};