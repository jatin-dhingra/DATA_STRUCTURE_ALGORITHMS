class Solution {
public:
    bool checkPossibility(vector<int>& nums) 
    {
        int check{};
        int n=nums.size();
        for(int i{};i<n-1;i++)
        {
            if(nums[i]<=nums[i+1])
            {
                continue;
            }
            if(check==1)
            {
                return false;
            }
            
            if(i==0 || nums[i+1]>=nums[i-1])
            {
                nums[i]=nums[i+1];
            }
            else
            {
                nums[i+1]=nums[i];
            }
            check=1;
        }
        return true;
        
    }
};