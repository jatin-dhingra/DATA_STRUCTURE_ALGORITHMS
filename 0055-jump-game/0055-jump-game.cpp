class Solution {
public:
   
    bool canJump(vector<int>& nums) 
    {
        int ans{};
        int n=nums.size();
        for(int i{};i<n;i++)
        {
            if(i>ans)
            {
                return false;
            }
            ans=max(ans,i+nums[i]);
            
        }
        return true;
    }
};