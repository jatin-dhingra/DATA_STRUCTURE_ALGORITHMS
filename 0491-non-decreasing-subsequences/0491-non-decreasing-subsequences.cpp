class Solution {
public:
    map<vector<int>,int>m;
    void solve(vector<int>&nums,int ind,vector<vector<int>>&ans,vector<int>&v)
    {
        vector<int>ran=v;
        sort(ran.begin(),ran.end());
        if(v==ran && v.size()>=2 && m.find(v)==m.end())
        {
            ans.push_back(v);
            m[v]=1;
        }
        
        for(int i=ind;i<nums.size();i++)
        {
            v.push_back(nums[i]);
            solve(nums,i+1,ans,v);
            v.pop_back();
        }
    }
    
    vector<vector<int>> findSubsequences(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        vector<int>v;
        int n=nums.size();
        solve(nums,0,ans,v);
        return ans;
    }
};