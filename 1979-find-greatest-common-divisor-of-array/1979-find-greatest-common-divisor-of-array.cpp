class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int minn=nums[0];
        int maxx=nums[n-1];
        return __gcd(minn,maxx);
        
    }
};