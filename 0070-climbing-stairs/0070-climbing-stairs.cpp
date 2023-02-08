class Solution {
public:
    int climbStairs(int n)
    {
       
        int ans{};
        int onestep=1;
        int twostep=1;
        if(n<=1)
        {
            return n;
        }
        for(int i=2;i<=n;i++)
        {
            ans=twostep+onestep;
            twostep=onestep;
            onestep=ans;
        }
        return ans;
    }
};