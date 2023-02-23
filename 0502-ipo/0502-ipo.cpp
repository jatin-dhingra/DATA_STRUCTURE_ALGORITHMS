
class Solution {
public:
    
    int findMaximizedCapital(int k, int w, vector<int>& p, vector<int>& c)
    {
        int n=p.size();
        vector<pair<int,int>>vp;
        for(int i{};i<n;i++)
        {
            vp.push_back({c[i],p[i]});
        }
        sort(vp.begin(),vp.end());
        priority_queue<int>pq;
        int i{};
        while(k>0)
        {
            while(i<n && vp[i].first<=w)
            {
                pq.push(vp[i].second);
                i++;
            }
             if(!pq.empty()){
                
                w+=pq.top();
                pq.pop();
                k--;
            }
            else
            {
                break;
            }
        }
        return w;
    }
};