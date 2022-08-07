class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int ans=INT_MIN;
        int pro=1;
        int n=nums.size();
        
        for(int i{};i<n;i++)
        {
            pro*=nums[i];
            ans=max(ans,pro);
            if(pro==0)
            {
                pro=1;
            }
        }
        pro=1;
        for(int i=n-1;i>=0;i--)
        {
            pro*=nums[i];
            ans=max(ans,pro);
            if(pro==0)
            {
                pro=1;
            }
        }
        return ans;
        
    }
};