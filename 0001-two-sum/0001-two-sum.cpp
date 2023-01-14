class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        map<int,int>m;
        int n=nums.size();
        vector<int>ans;
        for(int i{};i<n;i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                ans.push_back(i);
                ans.push_back(m[target-nums[i]]);
            }
            m[nums[i]]=i;
        }
        return ans;
        
    }
};