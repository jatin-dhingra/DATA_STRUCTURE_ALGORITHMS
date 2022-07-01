class Solution {
public:
    int maximumUnits(vector<vector<int>>& bt, int sz) 
    {
        sort(bt.begin(), bt.end(), [&](vector<int> a, vector<int> b) {
            return a[1] > b[1];
        });
        int ans{};
        for(auto i:bt)
        {
            if(i[0]<=sz)
            {
                ans+=(i[0]*i[1]);
                sz-=i[0];
            }
            else
            {
            
                int total=sz*i[1];
                ans+=total;
                break;
            }
        }
        return ans;
        
    }
};