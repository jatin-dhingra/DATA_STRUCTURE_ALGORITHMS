class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int s{};
        int e=nums.size()-1;
        int mid{};
        while(mid<=e)
        {
            if(nums[mid]==0)
            {
                swap(nums[mid],nums[s]);
                s++;
                mid++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else if(nums[mid]==2)
            {
                swap(nums[mid],nums[e]);
                e--;
            }
        }
        
    }
};