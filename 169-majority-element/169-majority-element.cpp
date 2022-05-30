class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int cand{},count{};
        for(int i{};i<nums.size();i++)
        {
            if(count==0)
            {
                cand=nums[i];
            }
            if(nums[i]==cand)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return cand;
        
    }
};