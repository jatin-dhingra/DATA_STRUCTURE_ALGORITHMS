class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int>&v,vector<int>&nums,int n,int ind)
    {
        if(ind>=n)
        {
            ans.push_back(nums);
            return;
        }
        for(int i{ind};i<n;i++)
        {
            swap(nums[i],nums[ind]);
            solve(ans,v,nums,n,ind+1);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        int n=nums.size();
        vector<vector<int>>ans;
        vector<int>v;
        solve(ans,v,nums,n,0);
        return ans;
    }
};