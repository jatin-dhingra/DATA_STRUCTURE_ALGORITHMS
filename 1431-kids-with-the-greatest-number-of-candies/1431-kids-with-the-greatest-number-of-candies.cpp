class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& can, int ex) {
        int maxx=*max_element(can.begin(),can.end());
        vector<bool>ans;
        int n=can.size();
        for(int i{};i<n;i++)
        {
            if(can[i]+ex>=maxx)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};