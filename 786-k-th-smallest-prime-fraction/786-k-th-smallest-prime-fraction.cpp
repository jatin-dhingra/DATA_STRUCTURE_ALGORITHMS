class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) 
    {
       
       priority_queue<pair<double,pair<int,int>>>pq;
        int n=arr.size();
        for(int i{};i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                double val=(double)arr[i]/arr[j];
                 pq.push({val,{arr[i],arr[j]}});
                if(pq.size()>k)
                {
                    pq.pop();
                }
               
            }
        }
        
         return {pq.top().second.first,pq.top().second.second};
        
        
    }
};