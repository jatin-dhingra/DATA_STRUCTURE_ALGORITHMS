class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k)
    {
        int count{};
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum{};
        int rem{};
        
        for(int i{};i<nums.size();i++)
        {
            sum+=nums[i];
            rem=sum%k;
            if(rem<0)
            {
                rem+=k;
            }
            if(mp.find(rem)!=mp.end())
            {
                count+=mp[rem];
                mp[rem]++;
            }
            else
            {
                mp[rem]=1;
            }
        }
        return count;
        
    }
};