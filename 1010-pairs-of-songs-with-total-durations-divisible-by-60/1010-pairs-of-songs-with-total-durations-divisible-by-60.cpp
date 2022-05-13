class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) 
    {
       vector<int>v(60,0);
        int val{};
        int ans{};
        for(int i:time)
        {
            val=i%60;
            if(val==0)
            {
                ans+=v[val];
            }
            else
            {
                ans+=v[60-val];
            }
            v[val]++;
        }
        return ans;
    }
};