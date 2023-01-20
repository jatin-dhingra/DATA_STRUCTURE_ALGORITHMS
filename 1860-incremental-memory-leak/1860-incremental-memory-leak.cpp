class Solution {
public:
    vector<int> memLeak(int m1, int m2)
    {
        vector<int>v;
        priority_queue<pair<int,int>>pq;
        
        pq.push({m1,1});
        pq.push({m2,2});
        int time{};
        
        while(1)
        {
            
            if(time>max(m1,m2))
            {
                break;
            }
            if(m1>=m2)
            {
                m1-=time;
                pq.push({m1,1});
            }
            else
            {
                m2-=time;
                pq.push({m2,2});
            }
            time++;
        }
        v.push_back(time);
        v.push_back(m1);
        v.push_back(m2);
        return v;
        
    }
};