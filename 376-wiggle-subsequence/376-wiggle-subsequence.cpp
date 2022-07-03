class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) 
    {
        int ans{};
        int count1{1},count2{1};
        int n=nums.size();
        for(int i{1};i<n;i++)
        {
            if(nums[i]<nums[i-1])
            {
                count1=count2+1;
            }
            if(nums[i]>nums[i-1])
            {
                count2=count1+1;
            }
        }
        return max(count2,count1);
        
    }
};