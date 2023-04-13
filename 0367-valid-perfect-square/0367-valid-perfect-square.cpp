class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        // if(floor(double(sqrt(num)))==ceil(double(sqrt(num))))
        // {
        //     return true;
        // }
        // return false;
        
        long long st=1;
        long long ed=num;
        while(st<=ed)
        {
            long long mid=st+(ed-st)/2;
            if(mid*mid==num)
            {
                return true;
            }
            if(mid*mid<num)
            {
                st=mid+1;
            }
            else
            {
                ed=mid-1;
            }
        }
        return false;
        
    }
};