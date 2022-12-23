class Solution {
public:
    //int dp[INT_MAX][2];
    int solve(vector<int>&prices,int ind,bool buy,vector<vector<int>>&dp)
    {
        if(ind>=prices.size())
        {
            return 0;
        }
        if(dp[ind][buy]!=-1)
        {
            return dp[ind][buy];
        }
        int ans{};
        
        if(buy)
        {
            int today=solve(prices,ind+1,!buy,dp)-prices[ind];
            int tom=solve(prices,ind+1,buy,dp);
            ans=max(today,tom);
        }
        else
        {
            int today=solve(prices,ind+2,!buy,dp)+prices[ind];
            int tom=solve(prices,ind+1,buy,dp);
            ans=max(today,tom);
        }
        return dp[ind][buy]=ans;
    }
    int maxProfit(vector<int>& prices) 
    {
        int n=prices.size();
        vector<vector<int>>dp(n+1,vector<int>(2,-1));
        if(n==1)
        {
            return 0;
        }
       // memset(dp,-1,sizeof(dp));
        return solve(prices,0,true,dp);
        
        
    }
};