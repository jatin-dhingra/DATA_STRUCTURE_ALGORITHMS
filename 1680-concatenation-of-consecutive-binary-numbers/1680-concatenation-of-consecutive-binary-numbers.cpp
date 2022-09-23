class Solution {
public:
    int concatenatedBinary(int n) 
    {
        int mod=1e9+7;
        long long ans{};
        int power{};
        for(int i{1};i<=n;i++)
        {
            if((i&(i-1))==0)
            {
                power++;
            }
           ans=((ans<<power)+i)%mod;
        }
        return (int)ans;
    }
};