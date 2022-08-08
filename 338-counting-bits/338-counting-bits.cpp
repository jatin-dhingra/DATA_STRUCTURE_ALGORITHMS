class Solution {
public:
    int bits(int n)
    {
        int count{};
        while(n)
        {
            if(n&1==1)
            {
                
                count++;
            }
            n>>=1;
        }
        return count;
    }
    vector<int> countBits(int n) 
    {
        vector<int>ans;
        for(int i{};i<=n;i++)
        {
            ans.push_back(bits(i));
        }
        
        return ans;
    }
};