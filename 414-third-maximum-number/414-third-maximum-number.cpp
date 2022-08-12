class Solution {
public:
    int thirdMax(vector<int>& nums) 
    {
        int k=3;
        set<int>st;
        for(int i:nums)
        {
            st.insert(i);
        }
        vector<int>v;
        for(int i:st)
        {
            v.push_back(i);
        }
        if(v.size()<=2)
        {
            return v[v.size()-1];
        }
        priority_queue<int,vector<int>,greater<int>>pq;
        
        for(int i{};i<v.size();i++)
        {
            pq.push(v[i]);
            if(pq.size()>k)
            {
                pq.pop();
            }
            
        }
        return pq.top();
        
        
    }
};