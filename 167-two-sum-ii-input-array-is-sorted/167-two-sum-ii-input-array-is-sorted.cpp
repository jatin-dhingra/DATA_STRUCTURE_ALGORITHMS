class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int>ans{};
        int n=nums.size();
        for(int i{};i<n-1;i++)
        {
            int s=i+1;
            int e=nums.size()-1;
            int val=target-nums[i];
            while(s<=e)
            {
                
                int mid=s+(e-s)/2;
                if(nums[mid]==val)
                {
                    ans.push_back(i+1);
                    ans.push_back(mid+1);
                    return ans;
                }
                else if(nums[mid]>val)
                {
                    e=mid-1;
                }
                else
                {
                    s=mid+1;
                }
            }
        }
        return ans;
        
    }
};