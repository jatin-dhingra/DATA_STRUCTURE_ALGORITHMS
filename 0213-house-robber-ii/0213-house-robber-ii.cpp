class Solution {
public:
    int dp[101],dp2[101];
    int first(int ind,vector<int>&nums)
    {
        
        if(ind<1)
        {
            return 0;
        }
        if(dp[ind]!=-1)
        {
            return dp[ind];
        }
        int pick=nums[ind]+first(ind-2,nums);
        int notpick=first(ind-1,nums);
        return dp[ind]=max(pick,notpick);
    }
    int second(int ind,vector<int>&nums)
    {
        
        if(ind<0)
        {
            return 0;
        }
        if(dp2[ind]!=-1)
        {
            return dp2[ind];
        }
        int pick=nums[ind]+second(ind-2,nums);
        int notpick=second(ind-1,nums);
        return dp2[ind]=max(pick,notpick);
    }
    int rob(vector<int>& nums) 
    {
        
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
        memset(dp2,-1,sizeof(dp2));
        if(n==1)
        {
            return nums[0];
        }
        return max(first(n-1,nums),second(n-2,nums));
    }
};