class Solution {
public:
    void func(vector<vector<int>>&ans,vector<int>&sub,vector<int>&nums,int ind)
    {
        if(ind==nums.size())
        {
            ans.push_back(sub);
            return;
        }
        
        sub.push_back(nums[ind]);
        func(ans,sub,nums,ind+1);
        sub.pop_back();
        func(ans,sub,nums,ind+1);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        
        vector<vector<int>>ans;
        vector<int>sub;
        func(ans,sub,nums,0);
        return ans;
        
    }
};