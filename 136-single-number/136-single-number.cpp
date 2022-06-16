class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        int ans{};
        for(auto i:nums)
        {
            ans^=i;
        }
        return ans;
        
    }
};