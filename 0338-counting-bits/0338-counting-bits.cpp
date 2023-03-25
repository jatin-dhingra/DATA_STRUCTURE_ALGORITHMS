class Solution {
public:
    int count(int n)
    {
        int bitcount{};
        while(n)
        {
            if(n&1)
            {
                bitcount++;
            }
            n>>=1;
        }
        return bitcount;
    }
    vector<int> countBits(int n) 
    {
        vector<int>ans;
        for(int i{};i<=n;i++)
        {
            ans.push_back(count(i));
        }
        return ans;
        
    }
};