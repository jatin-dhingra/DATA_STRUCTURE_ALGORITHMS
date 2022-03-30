class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        
        int n=nums.size();
        int ans{};
        for(int i{};i<n;i++)
        {
            if(i>ans)
            {
                return false;
            }
            ans=max(ans,nums[i]+i);
        }
        return true;
        
    }
};