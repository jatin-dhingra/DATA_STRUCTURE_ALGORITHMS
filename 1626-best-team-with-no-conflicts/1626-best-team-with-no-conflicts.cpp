class Solution {
public:
    
    int dp[1001][1001];
    int solve(vector<pair<int,int>>&vp,int ind,int val)
    {
        if(ind>=vp.size())
        {
            return 0;
        }
        if(dp[ind][val]!=-1)
        {
            return dp[ind][val];
        }
        if(vp[ind].second>=val)
        {
            int chose=vp[ind].first+solve(vp,ind+1,vp[ind].second);
            int notchose=solve(vp,ind+1,val);
            return dp[ind][val]=max(chose,notchose);
        }
        return dp[ind][val]=solve(vp,ind+1,val);
    }
    int bestTeamScore(vector<int>& s, vector<int>& a)
    {
        vector<pair<int,int>>vp;
        int n=s.size();
        
        for(int i{};i<n;i++)
        {
            vp.push_back({s[i],a[i]});
            
        }
        sort(vp.begin(),vp.end());
        memset(dp,-1,sizeof(dp));
        return solve(vp,0,0);
    }
    
};