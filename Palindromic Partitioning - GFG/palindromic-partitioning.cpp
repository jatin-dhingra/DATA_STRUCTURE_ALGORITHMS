// { Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[501][501];
    bool palin(string s,int i,int j)
    {
        while(i<=j)
        {
            if(s[i++]!=s[j--])
            {
                return false;
            }
        }
        return true;
    }
    int solve(string s,int i,int j)
    {
        if(i>=j)
        {
            return 0;
        }
        if(palin(s,i,j))
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int val=INT_MAX;
        for(int k=i;k<=j-1;k++)
        {
            int left{},right{};
            if(dp[i][k]!=-1)
            {
                left=dp[i][k];
            }
            else
            {
                left=solve(s,i,k);
            }
            if(dp[k+1][j]!=-1)
            {
                right=dp[k+1][j];
            }
            else
            {
                right=solve(s,k+1,j);
            }
            int temp=right+left+1;
            val=min(temp,val);
        }
        return dp[i][j]=val;
    }
    
    int palindromicPartition(string str)
    {
        // code here
        memset(dp,-1,sizeof(dp));
        int n=str.size();
        int ans=solve(str,0,n-1);
        return ans;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}  // } Driver Code Ends