class Solution {
public:
    int lastStoneWeight(vector<int>& stones) 
    {
        priority_queue<int>p;
        int n=stones.size();
        for(int i{};i<n;i++)
        {
            p.push(stones[i]);
        }
        while(!p.empty())
        {
            if(p.size()==1)
            {
                return p.top();
            }
            int k=p.top();
            p.pop();
            int j=p.top();
            p.pop();
            if(j<k)
            {
                p.push(k-j);
            }
            
        }
        
        return 0;
    }
};