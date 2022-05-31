class Solution {
public:
    void moveZeroes(vector<int>& nums)
    {
        
        int count{};
        int n=nums.size();
        for(int i{};i<n;i++)
        {
            if(nums[i]!=0)
            {
                nums[count]=nums[i];
                count++;
            }
            
        }
        for(int i{count};i<n;i++)
        {
            nums[i]=0;
        }
        
        
        
        
    }
};