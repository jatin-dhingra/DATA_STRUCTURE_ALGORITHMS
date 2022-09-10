class Solution {
public:
    int dp[1001][2][101];
    int recur(int i, vector<int>&p, bool buy, int t)
    {
        if(t<=0 || i>=p.size())
        {
            return 0;
        }
        if(dp[i][buy][t]!=-1)
        {
            return dp[i][buy][t];
        }
        int profit=0;
        if(buy==1)
        {
            profit=max(-p[i]+recur(i+1, p, false, t), recur(i+1, p, true, t));
           
        }
        else{
            profit=max(p[i]+recur(i+1, p, true, t-1), recur(i+1, p, false, t));
        }
        return dp[i][buy][t]=profit;
    }
    
    int maxProfit(int k, vector<int>& prices) 
    {
        memset(dp,-1,sizeof(dp));
        return recur(0, prices, true, k);
    }
};