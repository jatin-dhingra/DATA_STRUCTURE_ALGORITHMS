class Solution {
public:
    bool isPerfectSquare(int num) 
    {
        if(floor(double(sqrt(num)))==ceil(double(sqrt(num))))
        {
            return true;
        }
        return false;
        
    }
};