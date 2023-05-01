class Solution {
public:
    // int dp[301][5001];
    // int solve(int a,vector<int>&c,int ind)
    // {
    //     if(ind==0)
    //     {
    //         if(a%c[0]==0)
    //         {
    //             return 1;
    //         }
    //         else
    //         {
    //             return 0;
    //         }
    //     }
    //     if(dp[ind][a]!=-1)
    //     {
    //         return dp[ind][a];
    //     }
    //     int notpick=solve(a,c,ind-1);
    //     int pick=0;
    //     if(a>=c[ind])
    //     {
    //         pick=solve(a-c[ind],c,ind);
    //     }
    //     return dp[ind][a]=pick+notpick;
    // }
    int change(int a, vector<int>& c) 
    {
        int n=c.size();
        int dp[n][a+1];
        memset(dp,0,sizeof(dp));
        for(int i{};i<n;i++)
        {
            for(int j{};j<=a;j++)
            {
                if(i==0)
                {
                    if(j%c[i]==0)
                    {
                        dp[i][j]=1;
                    }
                }
            }
        }
        for(int i{1};i<n;i++)
        {
            for(int j{};j<=a;j++)
            {
                int notpick=dp[i-1][j];
                int pick=0;
                if(j>=c[i])
                {
                    pick=dp[i][j-c[i]];
                }
                dp[i][j]=pick+notpick;
            }
        }
        return dp[n-1][a];        
    }
};