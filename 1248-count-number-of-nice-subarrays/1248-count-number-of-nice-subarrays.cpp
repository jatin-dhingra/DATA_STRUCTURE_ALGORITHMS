class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) 
    {
        
        map<int,int>m;
        int count{};
        int ans{};
        m[0]=1;
        for(int i{};i<nums.size();i++)
        {
            count+=nums[i]%2;
            ans+=m[count-k];
            m[count]++;
        }
        return ans;
        
    }
};