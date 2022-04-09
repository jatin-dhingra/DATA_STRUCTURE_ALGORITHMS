class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        map<int,int>m;
        int n=nums.size();
        vector<int>ans;
        priority_queue<pair<int,int>>p;
        for(auto &i:nums)
        {
            m[i]++;
        }
        
        for(auto i:m)
        {
            p.push({i.second,i.first});
        }
        while(k--)
        {
            ans.push_back(p.top().second);
            p.pop();
        }
        return ans;
        
    }
};