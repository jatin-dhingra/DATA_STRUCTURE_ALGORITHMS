// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int equalPartition(int N, int nums[])
    {
        // code here
        int sum{};
        for(int i{};i<N;i++)
        {
            sum+=nums[i];
        }
        int n=N;
       int sum2=sum/2;
        int dp[n+1][sum2+1];
        if(sum%2!=0)
        {
            return false;
        }
        else
        {
            
            for(int i{};i<=n;i++)
            {
                for(int j{};j<=sum2;j++)
                {
                    if(i==0 && j!=0)
                    {
                        dp[i][j]=false;
                    }
                    if(j==0)
                    {
                        
                        dp[i][j]=true;
                    }
                }
            }
            
            for(int i=1;i<=n;i++)
            {
                for(int j=1;j<=sum2;j++)
                {
                    if(nums[i-1]<=j)
                    {
                        dp[i][j]=dp[i-1][j-nums[i-1]]|| dp[i-1][j];
                    }
                    else
                    {
                        dp[i][j]=dp[i-1][j];
                    }
                }
            }
        }
        return dp[n][sum2];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends