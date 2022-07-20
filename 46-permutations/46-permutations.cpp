class Solution {
public:
    void solve(vector<int>&nums,vector<vector<int>>&ans,int ind)
    {
        if(ind==nums.size())
        {
            ans.push_back(nums);
            return;
            
        }
        
        for(int i=ind;i<nums.size();i++)
        {
            swap(nums[i],nums[ind]);
            solve(nums,ans,ind+1);
            swap(nums[i],nums[ind]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        solve(nums,ans,0);
        return ans;
        
    }
};