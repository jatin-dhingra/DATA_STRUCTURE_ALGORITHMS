class Solution {
public:
    bool isPowerOfFour(int n) 
    {
        bool cond{};
        
        for(int i{};i<31;i++)
        {
            if(n==pow(4,i))
            {
                cond=true;
                break;
            }
        }
        return cond;
        
    }
};