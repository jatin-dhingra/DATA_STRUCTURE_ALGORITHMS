class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) 
    {
        vector<int>v=nums;
        sort(v.begin(),v.end());
        int count{};
        int s=0;
        int e=nums.size();
        for(int i{};i<nums.size();i++)
        {
            if(nums[i]!=v[i])
            {
                e=min(e,i);
                s=max(s,i);
            }
        }
        return (s-e>=0?s-e+1:0);
        
    }
};