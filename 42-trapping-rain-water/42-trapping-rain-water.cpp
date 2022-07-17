class Solution {
public:
    int trap(vector<int>& nums) 
    {
        int n=nums.size();
        int left[n],right[n];
        left[0]=nums[0];
        right[n-1]=nums[n-1];
        
        for(int i{1};i<n;i++)
        {
            left[i]=max(left[i-1],nums[i]);
        }
        for(int i=n-2;i>=0;i--)
        {
            right[i]=max(right[i+1],nums[i]);
        }
        vector<int>change(n);
        for(int i{};i<n;i++)
        {
            change[i]=min(left[i],right[i]);
        }
        int ans{};
        for(int i{};i<n;i++)
        {
            ans+=change[i]-nums[i];
        }
        cout<<ans;
        
        return ans;
        
    }
};