class Solution {
public:
   
    vector<int> getOrder(vector<vector<int>>& t) 
    {
        int n=t.size();
        
        for(int i{};i<n;i++)
        {
            t[i].push_back(i);
        }
      
        sort(t.begin(),t.end());
        vector<int>v;
        int ans = t[0][0];
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        int i{};
        while (i < n)
        {
           while(i < n && t[i][0]<=ans){
                pq.push({t[i][1], t[i][2]});
                i++;
            }
            if(!pq.empty()){
                v.push_back(pq.top().second);
                ans += pq.top().first;
                pq.pop();
            }else{
                ans = t[i][0];
            }
        }
        while(!pq.empty())
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        
        return v;
    }
};