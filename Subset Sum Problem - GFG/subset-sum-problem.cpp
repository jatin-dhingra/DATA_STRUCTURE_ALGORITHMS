// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(int N, int arr[], int sum){
        // code here 
        int dp[N+1][sum+1];
        for(int i{};i<=N;i++)
        {
            for(int j{};j<=sum;j++)
            {
                if(i==0)
                {
                    dp[i][j]=0;
                }
                if(j==0)
                {
                    dp[i][j]=1;
                }
                if(i==0 && j==0)
                {
                    dp[i][j]=1;
                }
            }
        }
        
        for(int i{1};i<=N;i++)
        {
            for(int j{1};j<=sum;j++)
            {
                if(arr[i-1]<=sum)
                {
                    dp[i][j]=(dp[i-1][j]|| dp[i-1][j-arr[i-1]]);
                }
                else if(arr[i-1]>sum)
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        
        return dp[N][sum];
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        int arr[N];
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(N, arr, sum) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends