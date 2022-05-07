class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int>m;
        priority_queue<pair<int,int>>pq;
        vector<int>ans;
        for(int i:nums)
        {
            m[i]++;
        }
        for(auto i:m)
        {
            pq.push({i.second,i.first});
        }
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
        
    }
};