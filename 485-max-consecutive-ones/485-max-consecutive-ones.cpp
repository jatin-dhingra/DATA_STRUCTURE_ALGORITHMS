class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int count{};
        int n=nums.size();
        int ans{};
        for(int i{};i<n;i++)
        {
            if(nums[i]==0)
            {
                count=0;
            }
            else
            {
                count++;
                ans=max(ans,count);
            }
        }
        return ans;
        
    }
};