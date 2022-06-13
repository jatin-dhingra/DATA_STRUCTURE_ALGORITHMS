class Solution {
public:
    
    int solve(vector<vector<int>>&tri,int i,int j,vector<vector<int>>&dp)
    {
        if(i>tri.size()-1)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        return  dp[i][j]=min(tri[i][j]+solve(tri,i+1,j,dp),tri[i][j]+solve(tri,i+1,j+1,dp));
    }
    
    int minimumTotal(vector<vector<int>>& tri) 
    {
        
        vector<vector<int>>dp(201,vector<int>(201));
        for(int i{};i<201;i++)
        {
            for(int j{};j<201;j++)
            {
                dp[i][j]=-1;
            }
        }
        // memset(dp,-1,sizeof(dp));
        return solve(tri,0,0,dp);
    }
};