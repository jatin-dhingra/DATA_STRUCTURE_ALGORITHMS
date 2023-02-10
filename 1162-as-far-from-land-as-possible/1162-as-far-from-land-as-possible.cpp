class Solution {
public:
    
    int maxDistance(vector<vector<int>>& grid) 
    {
        vector<pair<int,int>>one,zero;
        int n=grid.size();
        for(int i{};i<n;i++)
        {
            for(int j{};j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    one.push_back({i,j});
                }
                else{
                    zero.push_back({i,j});
                }
            }
        }
        int ans=-1;
        for(auto it:zero)
        {
            int x=INT_MAX;
            for(auto it1:one)
            {
                x=min(x,(abs(it.first-it1.first)+abs(it.second-it1.second)));
            }
            if(x!=INT_MAX)
            {
                ans=max(ans,x);
            }
        }
        return ans;
    }
};