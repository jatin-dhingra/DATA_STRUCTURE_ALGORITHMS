class Solution {
public:
    int lastStoneWeight(vector<int>& stones)
    {
        priority_queue<int>pq;
        
        for(auto i:stones)
        {
            pq.push(i);
        }
       while(!pq.empty())
        {
            if(pq.size()==1)
            {
                return pq.top();
            }
            int k=pq.top();
            pq.pop();
            int x=pq.top();
            pq.pop();
            if(x<k)
            {
                pq.push(k-x);
            }
        }
        return 0;
        
    }
};