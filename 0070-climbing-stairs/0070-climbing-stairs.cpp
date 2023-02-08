class Solution {
public:
    int dp[46];
    int solve(int ind)
    {
        if(ind==0)
        {
            return 1;
        }
        if(ind==1)
        {
            return 1;
        }
        if(dp[ind]!=0)
        {
            return dp[ind];
        }
        int one=solve(ind-1);
        int two=solve(ind-2);
        return dp[ind]=one+two;
    }
    int climbStairs(int n) 
    {
        memset(dp,0,sizeof(dp));
        return solve(n);
        
    }
};