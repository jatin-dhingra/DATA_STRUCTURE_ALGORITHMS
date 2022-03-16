class Solution {
public:
    
    void solve( vector<vector<int>>&ans,  vector<int>&v,vector<int>& nums,int ind,int sum,int t,int n)
    {
        if(ind==n)
        {
            if(t==0)
            {
                ans.push_back(v);   
            }
            return;
        }
        if(nums[ind]<=t)
        {
            v.push_back(nums[ind]);
             solve(ans,v,nums,ind,sum,t-nums[ind],n);
            v.pop_back();
        }
        
        solve(ans,v,nums,ind+1,sum,t,n);
    }
    
    vector<vector<int>> combinationSum(vector<int>& nums, int t) 
    {
        int ind{};
        int sum{};
        vector<int>v;
        vector<vector<int>>ans;
        int n=nums.size();
        solve(ans,v,nums,ind,sum,t,n);
        return ans;
    }
};