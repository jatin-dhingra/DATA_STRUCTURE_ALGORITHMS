class Solution {
public:
    int dp[10001];
     int check(vector<int>& nums,int ind)
     {
        int n=nums.size();
        if(ind>=n-1)
        {
            return 0;
        }
        if(dp[ind]!=10000)
        {
            return dp[ind];
        }
        for(int i=1;i<=nums[ind];i++)
        {
            dp[ind] = min(dp[ind] , 1+check(nums,ind+i));
        }
        return dp[ind];
    }
    int jump(vector<int>& nums)
    {
        for(int i{};i<10001;i++)
        {
            dp[i]=10000;
        }
        
        return check(nums,0);
    }
};