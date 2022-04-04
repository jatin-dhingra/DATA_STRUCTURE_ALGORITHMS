class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
        int n=nums.size();
        int minn=*min_element(nums.begin(),nums.end());
        int maxx=*max_element(nums.begin(),nums.end());
        return __gcd(minn,maxx);
    }
};