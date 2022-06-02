class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int>mp;
        int n=nums.size();
        vector<int>ans;
        for(int i{};i<n;i++)
        {
            if(mp.find(target-nums[i])!=mp.end())
            {
                ans.push_back(i);
                ans.push_back(mp[target-nums[i]]);
                break;
            }
            mp[nums[i]]=i;
        }
        return ans;
        
    }
};