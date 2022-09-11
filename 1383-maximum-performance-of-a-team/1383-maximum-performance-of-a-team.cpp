class Solution {
public:
//     static bool comp(pair<int,int>&a,pair<int,int>&b)
//     {
//         if(a.second==b.second)
//         {
//             return a.first>b.first;
            
//         }
//         return a.second<b.second;
//     }
    int maxPerformance(int n, vector<int>& speed, vector<int>& eff, int k) 
    {
        int mod=1000000007;
        vector<pair<int,int>>vp;
        for(int i{};i<n;i++)
        {
            vp.push_back({eff[i],speed[i]});
        }
        sort(vp.begin(),vp.end());
        reverse(vp.begin(),vp.end());
        priority_queue<int,vector<int>,greater<int>>pq;
        long long ans{},sum{};
           //int ans{};
        for(auto i:vp)
        {
            sum+=i.second;
            pq.push(i.second);
            if(pq.size()>k)
            {
                sum-=pq.top();
                pq.pop();
            }
            ans=max(ans,(sum*i.first));
        }
        
        //cout<<(int)ans%mod<<endl;
        return ans%1000000007;
        
    }
};