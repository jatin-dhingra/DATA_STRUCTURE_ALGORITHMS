class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int n=nums.size();
        int count{};
        int ans=0;
        for(int i{};i<n;i++)
        {
            if(nums[i]==0)
            {
                count=0;
            }
            else
            {
                count++;
                ans=max(count,ans);
            }
        }
        return ans;
        
    }
};