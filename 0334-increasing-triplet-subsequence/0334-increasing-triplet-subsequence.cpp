class Solution {
public:
    bool increasingTriplet(vector<int>& nums) 
    {
        stack<pair<int,int>>st;
        int n=nums.size();
        if(n<=2)
        {
            return 0;
        }
        
        int check=INT_MAX;
        
        for(int i{};i<n;i++)
        {
            if(nums[i]>check)
            {
                return true;
            }
            while(!st.empty() && nums[i]<=st.top().second )
            {
                st.pop();
            }
            if(!st.empty())
            {
                check=min(check,nums[i]);
            }
            st.push({i,nums[i]});
        }
        return false;
        
        
    }
};