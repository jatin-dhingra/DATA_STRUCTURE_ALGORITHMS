class Solution {
public:
    int searchInsert(vector<int>& nums, int t) 
    {
        int n=nums.size();
        int st=0,ed=n-1;
        
        while(st<=ed)
        {
            int mid=st+(ed-st)/2;
            if(nums[mid]==t)
            {
                return mid;
            }
            if(nums[mid]<t)
            {
                st=mid+1;
            }
            else
            {
                ed=mid-1;
            }
        }
        return st;
        
    }
};