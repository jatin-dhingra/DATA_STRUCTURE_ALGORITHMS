class Solution {
public:
    int countOdds(int low, int high)
    {
        if(low==high && low%2==0)
        {
            return 0;
        }
        else if(low==high && low%2==1)
        {
            return 1;
        }
        else if(low%2==0 && high%2==0)
        {
            return (high-low)/2;
        }
        else
        {
            return ((high-low)/2)+1;
        }
        
    }
};