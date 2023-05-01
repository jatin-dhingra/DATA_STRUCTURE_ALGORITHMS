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
        vector<int>prev(a+1,0),curr(a+1,0);
        for(int i{};i<n;i++)
        {
            for(int j{};j<=a;j++)
            {
                if(i==0)
                {
                    if(j%c[i]==0)
                    {
                        prev[j]=1;
                    }
                }
            }
        }
        for(int i{1};i<n;i++)
        {
            // vector<int>curr(a+1,0);
            for(int j{};j<=a;j++)
            {
                int notpick=prev[j];
                int pick=0;
                if(j>=c[i])
                {
                    pick=curr[j-c[i]];
                }
                curr[j]=pick+notpick;
            }
            prev=curr;
        }
        return prev[a];        
    }
};