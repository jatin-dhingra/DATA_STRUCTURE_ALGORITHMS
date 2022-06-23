class comp{
    public:
    bool operator()(pair<int,string> &a, pair<int,string> &b) const
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
    
    
    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        map<string ,int >m;
        for(int i{};i<words.size();i++)
        {
            m[words[i]]++;
        }
        
        priority_queue<pair<int,string>,vector<pair<int,string>>,comp>pq;
        
        for(auto i:m)
        {
            pq.push({i.second,i.first});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<string>ans;
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};