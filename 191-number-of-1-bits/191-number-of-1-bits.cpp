class Solution {
public:
    int hammingWeight(uint32_t n) 
    {
        int count{};
        while(n)
        {
            n&=n-1;
            count++;
        }
        return count;
        
    }
};