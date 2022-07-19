class Solution {
public:
    int dp[101];
    int solve(vector<int>&vec,int n)
    {
        if(n==0)
        {
            return vec[n];
            
        }
        if(n<0)
        {
            return 0;
        }
        if(dp[n]!=-1)
        {
            return dp[n];
        }
        int pick=vec[n]+solve(vec,n-2);
        int notpick=solve(vec,n-1);
        return dp[n]=max(pick,notpick);
    }
    
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        memset(dp,-1,sizeof(dp));
        if(n==1)
        {
            return nums[n-1];
        }
        vector<int>v1,v2;
        for(int i{};i<n;i++)
        {
            if(i!=0)
            {
                v1.push_back(nums[i]);
            }
            if(i!=n-1)
            {
                v2.push_back(nums[i]);
            }
        }
        int ans1=solve(v1,v1.size()-1);
        memset(dp,-1,sizeof(dp));
        int ans2=solve(v2,v2.size()-1);
        return max(ans1,ans2);
        
    }
};