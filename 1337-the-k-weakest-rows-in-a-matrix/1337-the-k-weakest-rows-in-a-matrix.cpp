class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) 
    {
        vector<pair<int,int>>ans;
        vector<int>v;
        int count{};
        int n=mat.size();
        for(int i{};i<n;i++)
        {
            int c{};
            for(int j{};j<mat[i].size();j++)
            {
                if(mat[i][j]==1)
                {
                    c++;
                }
            }
            ans.push_back({c,i});
        }
        sort(ans.begin(),ans.end());
        for(int i{};i<k;i++)
        {
            v.push_back(ans[i].second);
        }
        return v;
        
    }
};