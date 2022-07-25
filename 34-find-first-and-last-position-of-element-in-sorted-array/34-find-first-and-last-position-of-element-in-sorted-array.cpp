class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int>ans;
        map<int,vector<int>>m;
        int  n=nums.size();
        for(int i{};i<n;i++)
        {
            m[nums[i]].push_back(i);
        }
        ans=m[target];
         vector<int>mainans;
        if(ans.size()==0)
        {
             mainans.push_back(-1);
            mainans.push_back(-1);
            return mainans;
        }
       
        mainans.push_back(ans[0]);
        mainans.push_back(ans[ans.size()-1]);
        return mainans;
        
    }
};