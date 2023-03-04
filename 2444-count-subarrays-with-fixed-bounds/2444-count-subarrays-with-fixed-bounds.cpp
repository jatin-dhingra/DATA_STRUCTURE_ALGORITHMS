class Solution {
public:
    int mod=1e6;
    long long countSubarrays(vector<int>& nums, int minK, int maxK)
    {
        int pm=-1;int pM=-1;int L=-1;
        int n=nums.size();
        long long ans = 0;
        for(int i{};i<n;i++)
        {
            if(nums[i]<minK||nums[i]>maxK)
            {
                L=i;
                pm=pM=-1;
                continue;
            }
            if(nums[i]==minK)
                pm=i;
            if(nums[i]==maxK)
                pM=i;
            
            if(pm==-1||pM==-1)
                continue;
            
            ans += min(pm,pM)-L;
        }

        return ans;
    }
};