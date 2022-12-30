class Solution {
     int dp[]=new int [101];
    public int solve(int [] nums,int ind)
    {
        if(ind==0)
        {
            return nums[0];
        }
        if(ind<0)
        {
            return 0;
        }
        if(dp[ind]!=-1)
        {
            return dp[ind];
        }
        int pick=nums[ind]+solve(nums,ind-2);
        int notpick=solve(nums,ind-1);
        return dp[ind]=Math.max(pick,notpick);
    }
    public int rob(int[] nums)
    {
        int n=nums.length;
       
        Arrays.fill(dp,-1);
        return solve(nums,n-1);
        
    }
}