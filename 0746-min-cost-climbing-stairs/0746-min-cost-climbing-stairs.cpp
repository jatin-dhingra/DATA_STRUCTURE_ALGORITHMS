class Solution {
public:
    int dp1[1001],dp2[1001];
    int solve1(vector<int>&nums,int ind)
    {
        if(ind<2)
        {
            return nums[ind];
        }
        if(dp1[ind]!=-1)
        {
            return dp1[ind];
        }
        int pick=nums[ind]+solve1(nums,ind-2);
        int notpick=nums[ind]+solve1(nums,ind-1);
        return dp1[ind]=min(pick,notpick);
    }
    int solve2(vector<int>&nums,int ind)
    {
        if(ind<2)
        {
            return nums[ind];
        }
        if(dp2[ind]!=-1)
        {
            return dp2[ind];
        }
        int pick=nums[ind]+solve1(nums,ind-2);
        int notpick=nums[ind]+solve1(nums,ind-1);
        return dp2[ind]=min(pick,notpick);
        
    }
    int minCostClimbingStairs(vector<int>& cost) 
    {
        int n=cost.size();
        memset(dp1,-1,sizeof(dp1));
        memset(dp2,-1,sizeof(dp2));
        int zero=solve1(cost,n-1);
        int one=solve2(cost,n-2);
        return min(zero,one);
        
    }
};