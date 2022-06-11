class Solution {
public:
    
    void solve(vector<vector<int>>&ans,vector<int>&nums,vector<int>&v,int ind)
    {
        if(ind==nums.size())
        {
            ans.push_back(v);
            return;
        }
        
        v.push_back(nums[ind]);
        solve(ans,nums,v,ind+1);
        v.pop_back();
        solve(ans,nums,v,ind+1);
        
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        
        vector<vector<int>>ans;
        vector<int>v;
        if(nums.size()==0)
        {
            return ans;
        }
        int ind=0;
        sort(nums.begin(),nums.end());
        solve(ans,nums,v,ind);
        set<vector<int>>s;
        
        for(auto i:ans)
        {
            s.insert(i);
        }
        vector<vector<int>>finalans;
        
        for(auto i:s)
        {
            finalans.push_back(i);
        }
        return finalans;
        
    }
};