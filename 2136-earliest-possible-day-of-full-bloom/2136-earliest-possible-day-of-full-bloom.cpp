class Solution {
public:
    int earliestFullBloom(vector<int>& a, vector<int>& b) 
    {
        int n=a.size();
        vector<pair<int,int>>vp;
        
        for(int i{};i<n;i++)
        {
            vp.push_back({b[i],a[i]});
        }
        sort(vp.begin(),vp.end());
        //reverse(vp.begin(),vp.end());
        int ans{};
        
        for(int i{};i<n;i++)
        {
            ans=max(ans,vp[i].first)+vp[i].second;
        }
        return ans;
        
    }
};