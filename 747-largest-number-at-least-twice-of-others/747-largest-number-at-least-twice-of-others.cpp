class Solution {
public:
    int dominantIndex(vector<int>& nums)
    {
        vector<int>vec=nums;
        sort(vec.begin(),vec.end());
        int n=nums.size();
        int maxx=vec[n-1];
        for(int i{};i<n-1;i++)
        {
            if((2*vec[i])>maxx)
            {
                return -1;
            }
        }
        int ans{};
        
        for(int i{};i<n;i++)
        {
            if(nums[i]==maxx)
            {
                ans=i;
                break;
            }
        }
        return ans;
        
    }
};