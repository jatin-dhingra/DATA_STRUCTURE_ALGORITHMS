class Solution {
public:
    void solve(vector<int>&nums,vector<vector<int>>&ans,int ind,int n)
    {
        if(ind==n)
        {
            ans.push_back(nums);
            return;
        }
        
        for(int i=ind;i<n;i++)
        {
            swap(nums[i],nums[ind]);
            solve(nums,ans,ind+1,n);
            swap(nums[i],nums[ind]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) 
    {   
        vector<vector<int>>ans;
        int n=nums.size();
        solve(nums,ans,0,n);
        return ans;
    }
};