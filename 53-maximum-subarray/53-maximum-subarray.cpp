class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int ans{};
        int maxx=INT_MIN;
        for(auto i:nums)
        {
            ans+=i;
            maxx=max(maxx,ans);
            ans=max(ans,0);
            
        }
        return maxx;
        
    }
};