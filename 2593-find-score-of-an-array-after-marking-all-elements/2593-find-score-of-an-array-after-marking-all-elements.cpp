class Solution {
public:
    long long findScore(vector<int>& nums) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        int n=nums.size();
        for(int i{};i<n;i++)
        {
            pq.push({nums[i],i});
        }
        unordered_map<int,int>m;
        
        long long ans{};
        
        while(n--)
        {
            int ele=pq.top().first;
            int ind=pq.top().second;
            pq.pop();
            if(!m[ind])
            {
                ans+=ele;
                m[ind-1]=1;
                m[ind]=1;
                m[ind+1]=1;
            }
        }
        return ans;
    }
};