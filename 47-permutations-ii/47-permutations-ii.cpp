class Solution {
public:
    set<vector<int>>st;
    void fun(vector<int>&nums,int i)
    {
        if(i==nums.size())
        {
            st.insert(nums);
            return;
        }
        for(int x=i;x<nums.size();x++)
        {
            swap(nums[i],nums[x]);
            fun(nums,i+1);
            swap(nums[i],nums[x]);
        }
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums)
    {
        vector<vector<int>>ans;
        vector<int>v;
        
        fun(nums,0);
        for(auto i:st)
        {
            ans.push_back(i);
    
        }
        return ans;
    }
    
};