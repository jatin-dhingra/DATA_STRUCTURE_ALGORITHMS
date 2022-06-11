class Solution {
public:
    int minOperations(vector<int>& nums, int x) 
    {
        int n=nums.size();
        unordered_map<int,int>m;
        int sum{};
        m[0]=-1;
        int totalsum=accumulate(nums.begin(),nums.end(),0);
        int remsum=totalsum-x;
        if(remsum<0)
        {
            return -1;
        }
        for(int i{};i<n;i++)
        {
            sum+=nums[i];
            m[sum]=i;
        }
        int ans{INT_MIN};
        sum=0;
        for(int i{};i<n;i++)
        {
            sum+=nums[i];
            if(m.find(sum-remsum)!=m.end())
            {
                ans=max(ans,i-m[sum-remsum]);
            }
        }
        return ans==INT_MIN?-1:n-ans;
        
        
        
        
    }
};