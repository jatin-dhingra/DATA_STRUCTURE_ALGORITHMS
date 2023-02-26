class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums)
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        map<long long,int>m;
        int i{},j{n/2};
        int count{};
        while(i<n/2&&j<n)
        {
            if(2*nums[i]<=nums[j])
            {
                count++;
                i++;
                j++;
            }
            else
            {
                j++;
            }
            
        }
        return count*2;
        
        
    }
};