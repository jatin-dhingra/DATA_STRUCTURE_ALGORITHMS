class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
       int ans{};
        map<int,int>mp;
        for(int i{};i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto i:mp)
        {
            if(i.second>=2)
            {
                ans=i.first;
            }
        }
        return ans;
    }
};