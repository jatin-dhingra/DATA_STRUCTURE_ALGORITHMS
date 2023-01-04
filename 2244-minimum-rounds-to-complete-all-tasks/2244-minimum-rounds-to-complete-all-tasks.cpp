class Solution {
public:
    int minimumRounds(vector<int>& t) 
    {
        map<int,int>m;
        vector<pair<int,int>>vp;
        for(int i:t)
        {
            m[i]++;
        }
        int sum{};
        queue<int>q;
        for(auto i:m)
        {
            if(i.second==1)
            {
                return -1;
            }
           q.push(i.second);
        }
        int ans{};
        while(!q.empty())
        {
            int ele=q.front();
            q.pop();
            
            if(ele>=3)
            {
                ans++;
                ele-=3;
            }
            else if(ele==2)
            {
                ele-=2;
                ans++;
            }
            if(ele==1)
            {
                ans++;
                continue;
            }
            else if(ele==0)
            {
                continue;
            }
            else
            {
                q.push(ele);
            }
        }
        return ans;
      
        
        
    }
};