class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int n=nums.size();
        int d=n*(n+1)/2;
        int x=accumulate(nums.begin(),nums.end(),0);
        return d-x;
        
    }
};