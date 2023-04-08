class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        int sum{};
        int count{};
        map<int,int>m;
        int n=nums.size();
        m[0]=1;
        for(int i{};i<n;i++)
        {
            sum+=nums[i];
            count+=m[sum-k];
            m[sum]++;
        }
        return count;
        
    }
};