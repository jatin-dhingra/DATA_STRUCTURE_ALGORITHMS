class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        map<int,int>m;
        for(int i:nums)
        {
            m[i]++;
        }
        int ans{};
        for(auto i:m)
        {
            if(i.second==1)
            {
               ans= i.first;
            }
        }
        return ans;
        
    }
};