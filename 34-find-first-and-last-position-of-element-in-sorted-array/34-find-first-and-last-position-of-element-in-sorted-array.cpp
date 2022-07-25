class Solution {
public:
    
    int BS(vector<int>&nums,int target)
    {
        int ans=-1;
        int s=0;
        int e=nums.size()-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                e=mid-1;
            }
            else if(nums[mid]<target)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return ans;
    }
    
    int BS2(vector<int>&nums,int target)
    {
        int ans=-1;
        int s=0;
        int e=nums.size()-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                ans=mid;
                s=mid+1;
            }
            else if(nums[mid]<target)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return ans;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int>ans;
        int leftind=BS(nums,target);
        int rightind=BS2(nums,target);
        ans.push_back(leftind);
        ans.push_back(rightind);
        return ans;
    }
};