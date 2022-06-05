class Solution {
public:
    int minMaxGame(vector<int>& nums) 
    {
        
        int n=nums.size();
        
        if(n==1)
        {
            return nums[0];
        }
        while(n!=1)
        {
            n/=2;
            for(int i{};i<n;i++)
            {
                if(i%2==0)
                {
                    nums[i]=min(nums[i*2],nums[2*i+1]);
                }
                else
                {
                    nums[i]=max(nums[2*i],nums[2*i+1]);
                }
            }
        }
        return nums[0];
    }
};