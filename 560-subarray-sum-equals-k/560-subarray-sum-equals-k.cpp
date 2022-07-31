class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int sum{};
        int ans{};
        map<int,int>m;
        m[0]=1;
        int n=nums.size();
        for(int i{};i<n;i++)
        {
            sum+=nums[i];
            ans+=m[sum-k];
            m[sum]++;
        }
        return ans;
        
        
    }
};