class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) 
    {
        int ans{};
        priority_queue<int>pq;
        for(int i:piles)
        {
            pq.push(i);
        }
        while(k--)
        {
            int top=pq.top();
            pq.pop();
            if(top%2==0)
            {
                top/=2;
                pq.push(top);
            }
            else
            {
                top/=2;
                pq.push(top+1);
            }
        }
        while(!pq.empty())
        {
            ans+=pq.top();
            pq.pop();
        }
        return ans;
        
        
    }
};