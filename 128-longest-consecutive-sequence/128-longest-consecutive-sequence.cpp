class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
       
        int n=nums.size();
       
        if(n==0 || n==1)
        {
            return n;
        }
        int count=1;
        int ans=1;
        
        for(int i=1;i<n;i++)
        {
            if(nums[i]!=nums[i-1])
            {
                if(nums[i]==nums[i-1]+1)
                {
                    count++;
                }
                else
                {
                    ans=max(ans,count);
                    count=1;
                }
            }
        }
        return max(ans,count);
        
    }
};