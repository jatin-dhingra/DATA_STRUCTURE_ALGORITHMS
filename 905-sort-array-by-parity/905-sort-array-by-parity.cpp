class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        vector<int>odd,even;
        for(int i{};i<nums.size();i++)
        {
            if(nums[i]&1)
            {
                odd.push_back(nums[i]);
            }
            else
            {
                even.push_back(nums[i]);
            }
            
        }
        vector<int>ans;
        for(int i:even)
        {
            ans.push_back(i);
        }
        for(int i:odd)
        {
            ans.push_back(i);
        }
        return ans;
        
        
    }
};