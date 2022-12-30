class Solution {
    public int maxSubArray(int[] nums) 
    {
        int n=nums.length;
        int sum=0;
        int ans=Integer.MIN_VALUE;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            ans=Math.max(ans,sum);
            sum=Math.max(sum,0);
        }
        return ans;
    }
}