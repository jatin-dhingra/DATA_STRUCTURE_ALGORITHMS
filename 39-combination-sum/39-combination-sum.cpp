class Solution {
public:
    void solve(vector<int>&can,int target,vector<vector<int>>&ans,vector<int>&v,int ind)
    {
        if(target<=0)
        {
            if(target==0)
            {
                ans.push_back(v);
            }
            return;
        }
        for(int i{ind};i<can.size();i++)
        {
            v.push_back(can[i]);
            solve(can,target-can[i],ans,v,i);
            v.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& can, int target) 
    {
        vector<vector<int>>ans;
        vector<int>v;
        solve(can,target,ans,v,0);
        return ans;
    }
};