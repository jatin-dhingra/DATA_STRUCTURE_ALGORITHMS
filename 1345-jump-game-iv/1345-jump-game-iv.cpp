class Solution {
public:
    // int solve(vector<int>&arr,int st,int ind)
    // {
    //     if(ind==0)
    //     {
    //         return 1;
    //     }
    //     int forward=solve(arr,st,ind-1);
    //     int backward=solve(arr,st,ind+1);
    //     int other=(arr[st]==arr[ind]?solve(arr,ind,st):0);
    //     return min(forward,min(backward,other));
    // }
    int minJumps(vector<int>& arr) 
    {
        int n = arr.size();
        unordered_map<int,vector<int>>mp;
        for (int i{};i<n; i++)
        {
            mp[arr[i]].push_back(i);
        }
        
        queue<int>q;
        vector<bool>visited(n, false);
        q.push(0);
        int ans{};
        while(!q.empty())
        {
            int s = q.size();
            while(s--)
            {
                int curr = q.front();
                q.pop();
                if (curr == n - 1)
                    return ans;
                if (curr + 1 < n && !visited[curr + 1]) 
                {
                    visited[curr + 1] = true;
                    q.push(curr + 1);
                }
                if (curr - 1 >= 0 && !visited[curr - 1]) 
                {
                    visited[curr - 1] = true;
                    q.push(curr - 1);
                }
                for (int newIdx : mp[arr[curr]])  
                {                                
                    if (!visited[newIdx]) 
                    {
                        visited[newIdx] = true;
                        q.push(newIdx);
                    }
                }
                mp[arr[curr]].clear();    
            }
            ans++;
        }
        return -1;
        
        
    }
};