#define ll long long
class Solution {
public:
    int mod=1e9+7;
    ll solve(int i,string&s,int k,vector<int>&dp)
    {
        if(i>=s.length())return 1;
        if(dp[i]!=-1)return dp[i];
        ll num=0;
        ll ans=0;
        for(int j=i;j<s.length();j++)
        {
            num*=10;
            num+=(s[j]-'0');
            if(num>0 and num<=k)
            {
                ans+=1LL*solve(j+1,s,k,dp)%mod;
            }
            else
                break;
        }
        return dp[i]=ans%mod;
    }
    int numberOfArrays(string s, int k) {
        int n=s.length();
        vector<int>dp(n,-1);
        return solve(0,s,k,dp)%mod;
    }
};