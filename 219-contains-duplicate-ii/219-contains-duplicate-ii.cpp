class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        unordered_map<int,int>m;
        int n=nums.size();
        for(int i{};i<n;i++)
        {
            if(m.find(nums[i])!=m.end())
            {
                if(i-m[nums[i]]<=k)
                {
                    return true;
                }
            }
            m[nums[i]]=i;
        }
        
        return false;
        
    }
};