class comp{
    public:
    bool operator()(pair<int,int> &a, pair<int,int> &b) const
    {
        if(a.first > b.first) 
        {
            return true;
        }
        else if(a.first == b.first)
        {
            if(a.second<b.second)
            {
                return true;
            }
            
        }
        return false;
    }
};

class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) 
    {
        map<int,int>m;
        
        int n=nums.size();
        for(int i{};i<n;i++)
        {
            m[nums[i]]++;
        }
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,comp>pq;
        
        for(auto i:m)
        {
            pq.push({i.second,i.first});
            
        }
        vector<int>ans;
        while(!pq.empty())
        {
            int ele=pq.top().first;
            int val=pq.top().second;
            while(ele--)
            {
                ans.push_back(val);
            }
            pq.pop();
        }
        return ans;
        
    }
};