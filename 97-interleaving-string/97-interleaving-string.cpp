class Solution {
public:
     int dp[101][101];
    bool ans(string s1,string s2,string s3,int n,int m,int len)
    {
        if( n-1>=0 && m-1>=0 && dp[n-1][m-1]!=-1)
        {
            return dp[n-1][m-1];
        }
        if(n-1<0 && m-1<0 && len-1<0)
        {
            return true;
        }
        if(n-1>=0 && s1[n-1]==s3[len-1] && m-1>=0 && s2[m-1]==s3[len-1])
        {
            return dp[n-1][m-1]=ans(s1,s2,s3,n-1,m,len-1)|| ans(s1,s2,s3,n,m-1,len-1);
        }
        else if(n-1>=0 && s1[n-1]==s3[len-1])
        {
            return ans(s1,s2,s3,n-1,m,len-1);
        }
        else if(m-1>=0 && s2[m-1]==s3[len-1])
        {
            return ans(s1,s2,s3,n,m-1,len-1);
        }
        return false;
    }
    
    bool isInterleave(string s1, string s2, string s3) 
    {
       
        memset(dp,-1,sizeof(dp));
        int n=s1.size();
        int m=s2.size();
        int len=s3.size();
        if((n+m)!=len)
        {
            return false;
        }
        return ans(s1,s2,s3,n,m,len);
        
    }
};