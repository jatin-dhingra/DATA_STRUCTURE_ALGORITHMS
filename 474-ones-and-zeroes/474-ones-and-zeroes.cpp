class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) 
    {
        int zero{},one{};
        int dp[m+1][n+1];
        memset(dp,0,sizeof(dp));
        for(string s:strs)
        {
            zero=0;
            one=0;
            for(char c:s)
            {
                if(c=='1')
                {
                    one++;
                }
                else
                {
                    zero++;
                }
            }
            
            for(int i=m;i>=zero;i--)
            {
                for(int j=n;j>=one;j--)
                {
                    dp[i][j]=max(dp[i][j],dp[i-zero][j-one]+1);
                }
            }
            
        }
        return dp[m][n];
       
        
    }
};