class Solution {
public:
    long long max(long long a,long long b)
    {
        if(a>=b)
        {
            return a;
        }
        return b;
    }
    int minimizeArrayValue(vector<int>& nums) 
    {
        long long ans=nums[0];
        long long val=nums[0];
        int n=nums.size();
        
        for(int i{1};i<n;i++)
        {
            val+=nums[i];
            ans=max(ans,(ceil)(val/((1+i)*1.0)));
        }
        return (int)ans;
        
    }
};