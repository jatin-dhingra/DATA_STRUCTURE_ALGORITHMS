class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l)
    {
        priority_queue<int,vector<int>,greater<int>>pq;
        
        int n=h.size();
        for(int i{};i<n-1;i++)
        {
            int d=h[i+1]-h[i];
           
            if(d>0)
            {
                pq.push(d);
                
            }
            if(pq.size()>l)
            {
                b-=pq.top();
                pq.pop();
            }
            if(b<0)
            {
                return i;
            }
        }
        return n-1;
    }
};