class Solution {
public:
    int countone(int n)
    {
        int count{};
        while(n)
        {
            if((n&1)==1)
            {
                count++;
            }
            n>>=1;
        }
        return count;
    }
    
    vector<int> sortByBits(vector<int>& arr)
    {
        vector<int>ans;
        map<int,vector<int>>m;
        
        for(int i:arr)
        {
            // cout<<countone(i)<<endl;
            m[countone(i)].push_back(i);
        }
        
        for(auto i:m)
        {
            sort(i.second.begin(),i.second.end());
            for(auto j:i.second)
            {
                ans.push_back(j);
            }
        }
        return ans;
    }
    
};