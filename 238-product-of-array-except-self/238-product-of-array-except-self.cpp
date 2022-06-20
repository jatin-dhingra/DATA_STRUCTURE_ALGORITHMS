class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>pre(n),suf(n);
        pre[0]=1;
        suf[n-1]=1;
        
        for(int i{1};i<n;i++)
        {
            pre[i]=pre[i-1]*nums[i-1];
        }
        
        for(int i=n-2;i>=0;i--)
        {
            suf[i]=suf[i+1]*nums[i+1];
        }
        
        vector<int>ans;
        
        for(int i{};i<n;i++)
        {
            ans.push_back(pre[i]*suf[i]);
        }
        return ans;
        
    }
};