class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int sum{};
        int curr=INT_MIN;
        for(auto i:nums)
        {
            sum+=i;
            curr=max(sum,curr);
            sum=max(sum,0);
        }
        return curr;
    }
};