class Solution {
public:
    uint32_t reverseBits(uint32_t n) 
    {
        uint32_t count{};
        
        for(int i{};i<32;i++)
        {
            count<<=1;
            if((n&1)==1)
            {
                count++;
                
            }
            n>>=1;
        }
        return count;
        
    }
};