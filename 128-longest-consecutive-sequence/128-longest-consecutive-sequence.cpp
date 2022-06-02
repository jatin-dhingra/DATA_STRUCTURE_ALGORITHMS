class Solution {
public:
    int longestConsecutive(vector<int>& nums) 
    {
        set<int>s;
        int ans{};
        for(auto i:nums)
        {
            s.insert(i);
        }
        
        for(auto i:nums)
        {
            if(!(s.count(i-1)))
            {
                int k=i;
                int count{1};
                while(s.count(k+1))
                {
                    k+=1;
                    count+=1;
                }
                ans=max(ans,count);
            }
        }
        return ans;
        
    }
};