class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) 
    {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        if(nums.size()==0)
        {
            return ans;
        }
        vector<int>v=nums[0];
        
        for(auto i:nums)
        {
            if(i[0]<=v[1])
            {
                v[1]=max(v[1],i[1]);
            }
            else
            {
                ans.push_back(v);
                v=i;
            }
        }
        ans.push_back(v);
        
        return ans;
        
        
    }
};