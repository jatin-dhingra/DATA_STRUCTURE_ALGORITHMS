class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        unordered_set<int>st;
        
        int n=nums.size();
        if(n==0)
        {
            return 0;
        }
        for(auto i:nums)
        {
            st.insert(i);
        }
        int ans=1;
        for(auto i:nums)
        {
            if(!st.count(i-1))
            {
                int num=i;
                int count=1;
                while(st.count(num+1))
                {
                    num++;
                    count++;
                }
                ans=max(ans,count);
            } 
        }
        return ans;
        
    }
};