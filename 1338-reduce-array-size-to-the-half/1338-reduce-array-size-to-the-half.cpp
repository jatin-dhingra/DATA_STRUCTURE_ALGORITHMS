class Solution {
public:
    int minSetSize(vector<int>& arr) 
    {
        map<int,int>m;
        int ans{};
        int n=arr.size();
        for(int i{};i<n;i++)
        {
            m[arr[i]]++;
        }
        int lim=n/2;
        priority_queue<int>pq;
        for(auto i:m)
        {
            pq.push(i.second);
        }
        while(!pq.empty())
        {
            n-=pq.top();
            pq.pop();
            ans++;
            if(lim>=n)
            {
                break;
            }
        }
        return ans;
        
        
    }
};