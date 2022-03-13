class Solution {
public:
    int maximumTop(vector<int>& nums, int k)
    {
        int n=nums.size();
        if(k==0)
        {
            return nums[0];
        }
        else if(n==1)
        {
            if(!(k&1))
            {
                return nums[0];
            }
           
            return -1;
        }
        else if(k>n)
        {
            return *max_element(nums.begin(),nums.end());
        }
        else if(k==n)
        {
            return *max_element(nums.begin(),nums.begin()+k-1);
        }
        int check=nums[k];
        for(int i{};i<k-1;i++)
        {
            check=max(nums[i],check);
        }
        return check;
    }
};