class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int x{};
        for(int i:nums)
        {
            x^=i;
        }
        return x;
        
    }
};