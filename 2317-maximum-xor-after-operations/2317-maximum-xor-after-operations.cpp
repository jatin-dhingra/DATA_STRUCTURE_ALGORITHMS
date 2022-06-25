class Solution {
public:
    int maximumXOR(vector<int>& nums) 
    {
        int ans{};
        for(int i{};i<nums.size();i++)
        {
            ans|=nums[i];
        }
        return ans;
        
    }
};