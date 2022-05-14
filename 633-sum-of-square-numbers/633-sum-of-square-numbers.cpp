class Solution {
public:
    bool judgeSquareSum(int c) 
    {
        bool check=false;
        for(long long i{};i<=sqrt(c);i++)
        {
            double ans=sqrt(c-(i*i));
            if(ans==int(ans))
            {
                check=true;
            }
        }
        return check;
        
    }
};