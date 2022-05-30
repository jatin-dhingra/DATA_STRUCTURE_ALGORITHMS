class Solution {
public:
    int divide(int dividend, int divisor) 
    {
        
        if(dividend==INT_MIN && divisor==-1)
        {
            return INT_MAX;
        }
        if(dividend==INT_MIN && divisor==1)
        {
            return INT_MIN;
        }
        
        long int d1=abs(dividend);
        long int d2=abs(divisor);
        int count{};
        
        int ans{};
        while(d2<=d1)
        {
            long int sum=d2,count{1};
            
            while(sum<=d1-sum)
            {
                sum+=sum;
                count+=count;
            }
            ans+=count;
            d1-=sum;
        }
        
        if((dividend<0 && divisor>0)|| (dividend>0 && divisor<0))
        {
            return -ans;
        }
        return ans;
        
        
        
        
    }
};