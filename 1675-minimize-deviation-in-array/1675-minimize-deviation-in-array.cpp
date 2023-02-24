class Solution {
public:
    int minimumDeviation(vector<int>& nums) 
    {
        set<int>ss;
        sort(nums.begin(),nums.end());
        for(int i{};i<nums.size();i++)
        {
            if(!(nums[i]&1))
            {
                ss.insert(nums[i]);
            }
            else
            {
                ss.insert(nums[i]*2);
            }
        }
        
        int ans=*ss.rbegin()-*ss.begin();
        
        while(*ss.rbegin()%2==0)
        {
            int num=*ss.rbegin();
            ss.erase(num);
            ss.insert(num/2);
            ans=min(ans,*ss.rbegin()-*ss.begin());
        }
        return ans;
        
    }
};