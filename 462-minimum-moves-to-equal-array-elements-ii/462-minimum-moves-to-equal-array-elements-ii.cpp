class Solution {
public:
    int minMoves2(vector<int>& nums)
    {
        int count{};
        int n=nums.size();
        int central{};
        sort(nums.begin(),nums.end());
        if(n&1)
        {
            central=nums[n/2];
            
        }
        else
        {
            central=(nums[(n/2)-1]+nums[n/2])/2;

        }
        
        for(int i{};i<n;i++)
        {
            count+=abs(nums[i]-central);
        }
        return count;
        
    }
};