class Solution {
public:
    int subtractProductAndSum(int n)
    {
        int a{n},b{n};
        int pro{1};
        int sum{};
        while(a)
        {
            pro*=a%10;
            a=a/10;
        }
       
        while(b)
        {
            sum+=b%10;
            b/=10;
           
        }
       
        return pro-sum;
        
    }
};