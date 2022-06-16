class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int>ans(n+1,0);
        if(n==0)
        {
            return {0};
        }
        ans[0]=0;
        ans[1]=1;
        if(n<=1)
        {
            return ans;
        }
        for(int i=2;i<=n;i++)
        {
            if(!(i&1))
            {
                ans[i]=ans[i/2];
            }
            else
            {
                ans[i]=ans[i/2]+1;
            }
        }
        return ans;
        
    }
};