class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {
        vector<int>vis(n+1,0);
        for(auto i:t)
        {
            vis[i[0]]--;
            vis[i[1]]++;
        }
        for(int i{1};i<=n;i++)
        {
            if(vis[i]==n-1)
            {
                return i;
            }
        }
        return -1;
    }
};