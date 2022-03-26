class Solution {
public:
    int search(vector<int>& nums, int target)
    {
        int ans=-1;
        int i=0;
        int j=nums.size()-1;
        while(i<=j)
        {
            int mid=i+(j-i)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                i=mid+1;
            }
            else
            {
                j=mid-1;
            }
        }
        return ans;
        
    }
};