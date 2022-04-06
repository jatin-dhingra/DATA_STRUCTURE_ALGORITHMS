class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        priority_queue<pair<int,int>>p;
        unordered_map<int,int>m;
        int n=nums.size();
        vector<int>ans;
        for(int i{};i<n;i++)
        {
            m[nums[i]]++;
        }
        
        for(auto it=m.begin();it!=m.end();it++)
        {
            p.push({it->second,it->first});
        }
        while(k--)
        {
            ans.push_back(p.top().second);
            p.pop();
        }
        return ans;
        
    }
};