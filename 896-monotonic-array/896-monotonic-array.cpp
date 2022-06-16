class Solution {
public:
    bool isMonotonic(vector<int>& nums) 
    {
        int ind{};
        int inc{},dec{};
       for(int i{};i<nums.size()-1;i++)
       {
           if(nums[i]>nums[i+1])
           {
               dec=1;
           }
           else if(nums[i]<nums[i+1])
           {
               inc=1;
           }
       }
        
        return !dec || !inc;
    }
};