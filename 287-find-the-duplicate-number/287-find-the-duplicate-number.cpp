class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        map<int,int>m;
        for(auto i:nums)
        {
            m[i]++;
        }
        int ans{};
        for(auto i:m)
        {
            if(i.second>=2)
            {
                ans=i.first;
                break;
            }
        }
        return ans;
        
    }
};