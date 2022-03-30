class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int global=INT_MIN;
        int local{};
        int curr{};
        
        for(auto i:nums)
        {
            local=max(i,local+i);
            if(global<local)
            {
                global=local;
            }
        }
        return global;
        
    }
};