class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int ans{};
        int sum{};
        
        unordered_map<int,int>mp;
        mp[0]=1;
        for(auto &i:nums)
        {
            sum+=i;
            ans+=mp[sum-k];
            mp[sum]++;
        }
        
        return ans;
        
    }
};