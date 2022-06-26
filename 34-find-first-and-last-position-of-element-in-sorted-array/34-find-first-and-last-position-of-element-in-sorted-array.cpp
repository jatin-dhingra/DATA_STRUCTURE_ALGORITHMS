class Solution {
public:
    
    void first(vector<int>&nums,int target,vector<int>&ans)
    {
        int n=nums.size();
        int s=0;
        int e=n-1;
        //  0 1  2  3  4  5
        // 9  10 10 10 10 12
        int temp{-1};
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                temp=mid;
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
        ans.push_back(temp);
        
    }
    void last(vector<int>&nums,int target,vector<int>&ans)
    {
        int n=nums.size();
        int s=0;
        int e=n-1;
        int temp{-1};
        while(s<=e)
        {
             int mid=s+(e-s)/2;
             if(nums[mid]==target)
            {
                temp=mid;
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
        
        ans.push_back(temp);
    }
    
    
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int>ans;
        
        first(nums,target,ans);
        last(nums,target,ans);
        return ans;
        
    }
};