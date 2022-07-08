class Solution {
public:
    int dp[101][101][21];
    int minCostPaint(vector<int>& houses,vector<vector<int>> &cost,int m,int n,int target,int prev){
        if(m==-1){
            if(target == 0){
                return 0;
            }
            return 1000001;
        }
        if(target < 0) return 1e6;
        if(dp[m][target][prev]!=-1) return dp[m][target][prev];
        int ans=1000001;
        if(houses[m]){
            if(prev == houses[m])
                ans=min(ans,minCostPaint(houses,cost,m-1,n,target,prev));
            else ans=min(ans,minCostPaint(houses,cost,m-1,n,target-1,houses[m]));
        }
        else{
            for(int i=0;i<n;i++){
                if(prev == i+1)
                    ans=min(ans,cost[m][i]+minCostPaint(houses,cost,m-1,n,target,prev));
                else ans=min(ans,cost[m][i]+minCostPaint(houses,cost,m-1,n,target-1,i+1));
            }
        }
        return dp[m][target][prev]=ans;
    }
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        memset(dp,-1,sizeof dp);
        int ans=minCostPaint(houses,cost,m-1,n,target,0);
        return (ans==1000001?-1:ans);
    }
};