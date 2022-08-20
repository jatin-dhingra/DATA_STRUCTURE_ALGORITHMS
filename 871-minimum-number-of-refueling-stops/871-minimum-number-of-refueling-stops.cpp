class Solution {
public:
    int minRefuelStops(int t, int fuel, vector<vector<int>>& st) 
    {
        priority_queue<int,vector<int>>pq;
        int n=st.size();
        if(n==0)
        {
            if(fuel>=t)
            {
                return 0;
            }
            else
            {
                
                return -1;
            }
        }
        int i{};
        int ind;
        for(ind=0;fuel<t;ind++)
        {
            
            while(i<n && st[i][0]<=fuel)
            {
                pq.push(st[i++][1]);
            }
            if(pq.empty())
            {
                return -1;
            }
            fuel+=pq.top();
            pq.pop();
            
        }
        return ind;
        
        
    }
};