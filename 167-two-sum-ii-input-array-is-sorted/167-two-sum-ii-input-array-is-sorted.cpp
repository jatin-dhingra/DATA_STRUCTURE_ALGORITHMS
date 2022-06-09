class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int s=0;
        int e=nums.size()-1;
        while(nums[s]+nums[e]!=target)
        {
            if(nums[s]+nums[e]>target)
            {
                e--;
            }
            else
            {
                s++;
            }
        }
        vector<int>ans;
        ans.push_back(s+1);
        ans.push_back(e+1);
        return ans;
        
    }
};