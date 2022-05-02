class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) 
    {
        int s{};
        int e=nums.size()-1;
        while(s<e)
        {
            if(nums[s]%2!=0 && nums[e]%2==0)
            {
                swap(nums[s],nums[e]);
                s++;
                e--;
            }
            else if(nums[s]%2==0)
            {
                s++;
            }
            else if(nums[e]%2==1)
            {
                e--;
            }
            
        }
        return nums;
    }
};