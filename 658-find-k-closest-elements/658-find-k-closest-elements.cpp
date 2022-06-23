class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x)
    {
        priority_queue<pair<int,int>>pq;
        
        int n=arr.size();
        for(int i{};i<n;i++)
        {
            pq.push({abs(arr[i]-x),arr[i]});
            if(pq.size()>k)
            {
                pq.pop();
            }
        }
        vector<int>ans;
        while(!pq.empty())
        {
            int num=pq.top().second;
            ans.push_back(num);
            pq.pop();
            
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};