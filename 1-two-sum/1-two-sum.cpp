class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector<int>ans;
        int n=nums.size();
        map<int,int>m;
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