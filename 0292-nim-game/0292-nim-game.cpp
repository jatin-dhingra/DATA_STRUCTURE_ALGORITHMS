class Solution {
public:
    bool canWinNim(int n) 
    {
        if(n<=3)
        {
            return 1; 
        }
        return n%4!=0;
        
    }
};