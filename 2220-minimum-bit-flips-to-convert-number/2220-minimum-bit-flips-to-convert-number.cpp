class Solution {
public:
    int minBitFlips(int start, int goal) 
    {
        int n=start;
        int m=goal;
        int count{};
        while(n || m)
        {
            int val1=n&1;
            int val2=m&1;
            if(val1!=val2)
            {
                count++;
            }
            n=n>>1;
            m=m>>1;
        }
        return count;
        
    }
};