class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
        int i{};
        int n=nums.size();
        for(int j{1};j<n;j++)
        {
            if(nums[i]!=nums[j])
            {
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};