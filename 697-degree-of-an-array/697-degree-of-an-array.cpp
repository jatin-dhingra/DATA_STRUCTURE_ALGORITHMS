class Solution {
public:
    int findShortestSubArray(vector<int>& nums) 
    {
        int n=nums.size();
        map<int,int>m;
        for(auto i:nums)
        {
            m[i]++;
        }
        int maxx{};
        int val{};
        for(auto i:m)
        {
            maxx=max(maxx,i.second);
            
        }
        vector<int>vec;
        for(auto i:m)
        {
            if(i.second==maxx)
            {
                vec.push_back(i.first);
                
            }
        }
        int ans{INT_MAX};
        for(auto i:vec)
        {
            int val1{},val2{};
            
            for(int j{};j<n;j++)
            {
                if(nums[j]==i)
                {
                    val1=j;
                    break;
                }
            }
            for(int j=n-1;j>=0;j--)
            {
                if(nums[j]==i)
                {
                    val2=j;
                    break;
                }
            }
            ans=min(ans,val2-val1+1);
        }
        return ans;
    }
};