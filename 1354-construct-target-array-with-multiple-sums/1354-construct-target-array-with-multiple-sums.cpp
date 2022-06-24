class Solution {
public:
    bool isPossible(vector<int>& target) 
    {
       
         priority_queue<int>pq;
        int ans{};
        int n=target.size();
        long long sum{};
        for(int i{};i<n;i++)
        {
            sum+=target[i];
            pq.push(target[i]);
        }
        
        while(!pq.empty())
        {
            long long topele=pq.top();
            pq.pop();
            
            long long remsum=sum-topele;
            if(remsum==1 || topele==1)
            {
                return true;
            }
            if(remsum>topele|| remsum==0)
            {
                return false;
            }
            long long valcheck=topele%remsum;
            if(valcheck==0)
            {
                return false;
            }
            
            topele=valcheck;
            pq.push(topele);
            sum=remsum+topele;
            
        }
        return true;
    }
};