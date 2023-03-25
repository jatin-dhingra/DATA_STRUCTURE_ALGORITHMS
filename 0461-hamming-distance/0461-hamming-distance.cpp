class Solution {
public:
    int hammingDistance(int x, int y) 
    {
        int diff=x^y;
        int count{};
        while(diff)
        {
            if(diff&1)
            {
                count++;
            }
            diff>>=1;
        }
        return count;
    }
};