class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int>ans;
        
        for(int i{};i<=n;i++)
        {
            int count{};
            int num=i;
             while(num)
             {
               count++;
                num=num&(num-1);
            }
            
            ans.push_back(count);
        }
        return ans;
    }
};