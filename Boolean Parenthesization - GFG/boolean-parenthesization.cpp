// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int dp[201][201][2];
    int MCM(string &s,int i,int j,int istrue)
    {
        if(i>j)
        {
            return 0;
        }
        if(i==j)
        {
            if(istrue)
            {
                return s[i]=='T';
            }
            else
            {
                return s[i]=='F';
            }
        }
        if(dp[i][j][istrue]!=-1)
        {
            return dp[i][j][istrue];
        }
        int ans{};
        for(int k=i+1;k<=j-1;k+=2)
        {
            int lt=MCM(s,i,k-1,1);
            int lf=MCM(s,i,k-1,0);
            int rt=MCM(s,k+1,j,1);
            int rf=MCM(s,k+1,j,0);
            
             if(s[k]=='&')
             {
                 if(istrue)
                    ans+=(lt*rt);
                 
                 else 
                    ans+=(lf*rt)+(lf*rf)+(lt*rf);
             }
             else if(s[k]=='|')
             {
                 if(istrue) 
                    ans+=(lt*rt)+(lf*rt)+(lt*rf);
                 else 
                    ans+=(lf*rf);
             }
             else if(s[k]=='^')
             {
                if(istrue) 
                    ans+=(lf*rt)+(lt*rf);
                else 
                    ans+=(lf*rf)+(lt*rt);
             }
        }
        return dp[i][j][istrue]=ans%1003;
    }

    int countWays(int N, string S){
        // code here
        int n=N;
        string s=S;
        
        int i=0;
        memset(dp,-1,sizeof(dp));
        int j=n-1;
       return MCM(s,i,j,1);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}  // } Driver Code Ends