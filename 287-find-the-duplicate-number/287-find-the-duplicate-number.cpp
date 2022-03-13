class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int s=0;
        int l=nums.size()-1;
        int n=nums.size();
        while(s<l)
        {
            int count{};
            int mid=s+(l-s)/2;
            for(int i{};i<n;i++)
            {
                if(nums[i]<=mid)
                {
                    count++;
                }
            }
            if(count>mid)
            {
                l=mid;
            }
            else
            {
                s=mid+1;
            }
        }
        return s;
        
    }
};