class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums)
    {
       int s{},e{};
        unordered_set<int>st;
        int n=nums.size();
        int sum{},ans{};
        st.insert(0);
        while(e<n)
        {
            int val1=nums[e];
            if(st.find(val1)==st.end())
            {
                st.insert(val1);
                sum+=nums[e];
                e++;
                ans=max(ans,sum);
            }
            else
            {
               sum-=nums[s];
                st.erase(nums[s]);
                s++;
            }
        }
        return ans;
        
    }
};