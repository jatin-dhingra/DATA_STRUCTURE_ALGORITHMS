class Solution {
public:
    long long minimumRemoval(vector<int>& nums) 
    {
        long long  n=nums.size();
        long long  summ=accumulate(nums.begin(),nums.end(),(long long)0);
       
        
        sort(nums.begin(),nums.end());
        
        long long  count{LLONG_MAX};
        for(int i{};i<n;i++)
        {
            count=min(count,summ-((n-i)*nums[i]));
        }
        return count;
        
    }
};