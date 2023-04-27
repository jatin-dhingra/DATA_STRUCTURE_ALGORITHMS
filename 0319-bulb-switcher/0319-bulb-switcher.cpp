class Solution {
public:
    int bulbSwitch(int n) 
    {
        int count{};
        int inc{1};
        while((inc*inc)<=n)
        {
            count++;
            inc++;
        }
        return count;
    }
};