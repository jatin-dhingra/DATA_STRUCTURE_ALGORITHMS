class Solution {
public:
    long long beautifulSubarrays(vector<int>& nums) 
    {
        long long ans{};
        unordered_map<int,int>m;
        m[0]=1;
      
        long long count{};
        
        for(int i:nums)
        {
            ans^=i;
            if(m[ans])
            {
                count+=m[ans];
            }
            m[ans]++;
        }
        return count;
        
    }
};