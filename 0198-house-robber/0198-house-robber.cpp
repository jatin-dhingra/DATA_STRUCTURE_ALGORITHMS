class Solution {
public:
    int rob(vector<int>& nums) 
    {
        int n=nums.size();
        
        int curr{},pre{nums[0]},pre2{};
       
        int take{},nottake{};
        for(int i{1};i<n;i++)
        {
            take=nums[i];
            if(i>1)
            {
                take+=pre2;
            }
            nottake=pre;
            curr=max(take,nottake);
            pre2=pre;
            pre=curr;
            
        }
        return pre;
    }
};