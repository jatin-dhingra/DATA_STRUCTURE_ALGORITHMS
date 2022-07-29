class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inter)
    {
        sort(inter.begin(),inter.end());
        vector<vector<int>>ans;
        vector<int>v=inter[0];
        
        for(auto i:inter)
        {
            if(i[0]<=v[1])
            {
                v[1]=max(i[1],v[1]);
            }
            else
            {
                ans.push_back(v);
                v=i;
            }
        }
        ans.push_back(v);
        
        return ans;
        
    }
};