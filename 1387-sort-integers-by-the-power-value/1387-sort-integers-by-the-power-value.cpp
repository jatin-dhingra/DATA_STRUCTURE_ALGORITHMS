class Solution {
public:
    int checkstep(int n)
    {
        int count{};
        while(n!=1)
        {
            if(n&1)
            {
                n=3*n+1;
            }
            else
            {
                n/=2;
            }
            count++;
        }
        return count;
    }
    int getKth(int lo, int hi, int k) 
    {
        
        int count{};
        vector<pair<int,int>>v;
        int val{};
        for(int i{lo};i<=hi;i++)
        {
            val=checkstep(i);
            v.push_back({val,i});
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        // for(auto i:v)
        // {
        //     cout<<i.first<<" "<<i.second<<endl;
        //     ans.push_back(i.second);
        // }
       //sort(ans.begin(),ans.end());
        return v[k-1].second;
        
    }
};