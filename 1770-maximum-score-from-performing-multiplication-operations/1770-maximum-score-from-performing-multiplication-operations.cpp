class Solution {
public:
    vector<vector<int>>dp;
    int solve(vector<int>& nums, vector<int>& mul,int st, int ed,int ind)
    {
        if(ind==mul.size())
        {
            return 0;
        }
        if(dp[ind][st]!=INT_MAX)
        {
            return dp[ind][st];
        }
        int pick=nums[st]*mul[ind]+solve(nums,mul,st+1,ed,ind+1);
        int notpick=nums[ed]*mul[ind]+solve(nums,mul,st,ed-1,ind+1);
        return dp[ind][st]=max(pick,notpick);
    }
    int maximumScore(vector<int>& nums, vector<int>& mul) 
    {
        
        int n=nums.size();
        int m=mul.size();
        int st=0;
        dp=vector<vector<int>>(m,vector<int>(m,INT_MAX));
        
        return solve(nums,mul,st,n-1,0);
    }
};