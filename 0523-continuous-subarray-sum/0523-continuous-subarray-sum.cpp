class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) 
    {
        map<int,int>m;
        int summ{};
        m[0]=-1;
        int n=nums.size();
        for(int i{};i<n;i++)
        {
            summ+=nums[i];
            if(k!=0)
            {
                summ%=k;
            }
            if(m.find(summ)!=m.end())
            {
                if( i-m[summ]>1)
                {
                    return 1;
                }
            }
            else
            {
                m[summ]=i;
            }
        }
        return 0;
        
    }
};