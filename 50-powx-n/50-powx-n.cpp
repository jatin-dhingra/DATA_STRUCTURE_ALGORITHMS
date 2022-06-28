class Solution {
public:
    double myPow(double x, int n) 
    {
        double ans{1.0};
        long long num=n;
        if(num<0){
           num= -1*num;
        }
        
        while(num)
        {
            if(num%2)
            {
                ans*=x;
                num--;
            }
            else
            {
                x*=x;
                num/=2;
            }
        }
        if(n<0)
        {
            return (double)1.0/(double)ans;
        }
        return ans;
    }
    
};