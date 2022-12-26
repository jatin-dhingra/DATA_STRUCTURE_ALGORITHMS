class Solution {
public:
    // bool solve(vector<int>&nums,int ind)
    // {
    //     if(ind==0)
    //     {
    //         return true;
    //     }
    //     int newind=solve(nums,ind-)
    // }
    bool canJump(vector<int>& nums) 
    {
        int n=nums.size();
        // if(n==1)
        // {
        //     if(nums[0]==0)
        //     {
        //         return false;
        //     }
        //     else
        //     {
        //         return true;
        //     }
        // }
        int ind=n-1;
        for(int i=n-2;i>=0;i--)
        {
            if(i+nums[i]>=ind)
            {
                ind=i;
            }
        }
        return ind==0;
        
    }
};