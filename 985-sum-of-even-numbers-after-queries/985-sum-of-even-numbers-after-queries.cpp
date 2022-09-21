class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& q)
    {
        vector<int>ans;
        int sum{};
        int n=nums.size();
        for(int i{};i<n;i++)
        {
            if(nums[i]%2==0)
            {
                sum+=nums[i];
            }
        }
        
        for(auto i:q)
        {
            if(nums[i[1]]%2==0)
            {
                sum-=nums[i[1]];
            }
            nums[i[1]]+=i[0];
            if(nums[i[1]]%2==0)
            {
                sum+=nums[i[1]];
            }
            ans.push_back(sum);
            
        }
        return ans;
        
        
    }
};