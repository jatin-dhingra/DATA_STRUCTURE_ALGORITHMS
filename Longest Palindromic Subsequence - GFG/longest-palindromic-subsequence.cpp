// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int longestPalinSubseq(string s) {
        //code here
        string r=s;
        reverse(r.begin(),r.end());
        int n=s.size();
        int dp[n+1][n+1];
        memset(dp,-1,sizeof(dp));
        
        for(int i{};i<n+1;i++)
        {
            for(int j{};j<n+1;j++)
            {
                if(i==0|| j==0)
                {
                    dp[i][j]=0;
                }
            }
        }
        
        for(int i{1};i<n+1;i++)
        {
            for(int j{1};j<n+1;j++)
            {
                if(s[i-1]==r[j-1])
                {
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][n];
    }
};

// { Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends