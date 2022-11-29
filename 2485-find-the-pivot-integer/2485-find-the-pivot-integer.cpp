class Solution {
public:
    int pivotInteger(int n) 
    {
        int sum=n*(n+1)/2;
        int ans{-1};
        for(int i{1};i<=n;i++)
        {
            int currsum=i*(i+1)/2;
            if(currsum==sum)
            {
                return i;
            }
            sum-=i;
        }
        return -1;
    }
};