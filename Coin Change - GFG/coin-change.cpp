// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    
    long long int count(int S[], int m, int sum) {

        // code here.
        long long dp[sum+1][m+1];
        
        for(int i{};i<sum+1;i++)
        {
            for(int j{};j<m+1;j++)
            {
                if(i==0)
                {
                    dp[i][j]=1;
                }
                if(j==0 && i>=1)
                {
                    dp[i][j]=0;
                }
            }
        }
        
        for(int i{1};i<sum+1;i++)
        {
            for(int j{1};j<m+1;j++)
            {
                dp[i][j]=dp[i][j-1];
                if(S[j-1]<=i)
                {
                    dp[i][j]+=dp[i-S[j-1]][j];
                }
            }
        }
        return dp[sum][m];
        
                
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for (int i = 0; i < m; i++) cin >> arr[i];
        Solution ob;
        cout << ob.count(arr, m, n) << endl;
    }

    return 0;
}  // } Driver Code Ends