class Solution {
public:
    int reverse(int x) 
    {
        long long rem{},sum{};
        while(x!=0)
        {
            rem=x%10;
            sum=sum*10+rem;
            x/=10;
        }
        return (sum>=INT_MAX||sum<=INT_MIN?0:sum);
        
    }
};