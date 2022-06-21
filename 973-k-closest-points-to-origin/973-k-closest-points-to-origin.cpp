class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) 
    {
        // closest -> smallest -> max heap
        vector<vector<int>>ans;
        vector<int>vec;
        priority_queue<pair<int,pair<int,int>>>pq;
        
        int n=points.size();
        for(int i{};i<n;i++)
        {
            // points[i][0],points[i][1];
            int dis=(pow(points[i][0],2)+pow(points[i][1],2));
            pq.push({dis,{points[i][0],points[i][1]}});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        while(!pq.empty())
        {
            int a=pq.top().second.first;
            int b=pq.top().second.second;
            pq.pop();
            vec.push_back(a);
            vec.push_back(b);
            ans.push_back(vec);
            vec.clear();
            
        }
        return ans;
        
    }
};