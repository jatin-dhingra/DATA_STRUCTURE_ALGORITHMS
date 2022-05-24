class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        int n=nums.size();
        k=k%n;
        
        for(int i{};i<n/2;i++)
        {
            swap(nums[i],nums[n-i-1]);
        }
        
        reverse(nums.begin()+k,nums.end());
        reverse(nums.begin(),nums.begin()+k);
        
    }
};