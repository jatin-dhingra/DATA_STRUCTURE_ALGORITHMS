class Solution {
public:
    void solve(int n,vector<int>&nums)
    {
        int k=2;
        while(n>1)
        {
            if(n%k==0)
            {
                nums.push_back(k);
                n/=k;
            }
            else
            {
                k++;
            }
        }
    }
    int distinctPrimeFactors(vector<int>& nums) 
    {
        map<int,int>m;
        vector<int>ans;
        int n=nums.size();
        for(int i{};i<n;i++)
        {
            solve(nums[i],ans);
            
        }
        for(auto i:ans)
        {
            m[i]++;
            
        }
        return m.size();
        
    }
};