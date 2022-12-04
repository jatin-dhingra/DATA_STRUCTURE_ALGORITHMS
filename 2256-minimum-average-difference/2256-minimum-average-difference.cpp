class Solution {
public:
    
    int minimumAverageDifference(vector<int>& nums) 
    {
        int n=nums.size();
        long long  pre[n];
        long long suf[n];
        pre[0]=nums[0];
        suf[n-1]=nums[n-1];
        
        for(int i{1};i<n;i++)
        {
            pre[i]=pre[i-1]+nums[i];
        }
        for(int i{n-2};i>=0;i--)
        {
            suf[i]=suf[i+1]+nums[i];
        }
        vector<pair<int,int>>vp;
        for(int i{};i<n-1;i++)
        {
            long foresum{},backsum{},abso{};            
            foresum=pre[i]/(i+1);
            backsum=(suf[i]-nums[i])/(n-i-1);
            abso=abs(foresum-backsum);
            vp.push_back({abso,i});
        }
        vp.push_back({pre[n-1]/n,n-1});
        int ans{};
        sort(vp.begin(),vp.end());
        return (int)vp[0].second;
        
        
    }
};