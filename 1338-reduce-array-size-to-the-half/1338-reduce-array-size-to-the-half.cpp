class Solution {
public:
    int minSetSize(vector<int>& arr) 
    {
        int n=arr.size();
        map<int,int>m;
        for(int i{};i<n;i++)
        {
            m[arr[i]]++;
        }
        int k=n/2;
        int count{};
        priority_queue<int>pq;
        int val{};
        for(auto i:m)
        {
            pq.push(i.second);
            
        }
        while(!pq.empty())
        {
            
            n-=pq.top();
            count++;
            pq.pop();
            if(n<=k)
            {
                break;
            }
        }
        return count;
        
    }
};