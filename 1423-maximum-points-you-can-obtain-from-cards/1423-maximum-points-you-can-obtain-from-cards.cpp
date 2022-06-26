class Solution {
public:
    int maxScore(vector<int>& nums, int k) 
    {
        int sum{};
        int n=nums.size();
        int ans=INT_MIN;
        for(int i{n-k};i<n;i++)
        {
            sum+=nums[i];
            
        }
        int val=sum;
        int a=0;
        int b=n-k;
        while(b<n)
        {
            sum+=(-nums[b]+nums[a]);
            val=max(val,sum);
            a++;
            b++;
        }
        return val;
    }
};