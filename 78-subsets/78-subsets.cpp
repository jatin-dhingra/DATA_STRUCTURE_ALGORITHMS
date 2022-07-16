class Solution {
public:
    void solve(vector<vector<int>>&ans,vector<int>&v,vector<int>&nums,int ind)
    {
        if(ind==nums.size())
        {
            ans.push_back(v);
            return;
        }
        v.push_back(nums[ind]);
        solve(ans,v,nums,ind+1);
        v.pop_back();
        solve(ans,v,nums,ind+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        vector<int>v;
        solve(ans,v,nums,0);
        return ans;
        
    }
};