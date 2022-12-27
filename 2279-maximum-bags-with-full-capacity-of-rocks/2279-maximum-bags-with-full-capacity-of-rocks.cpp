class Solution {
public:
    
    int maximumBags(vector<int>& c, vector<int>& r, int ad) 
    {
        int n=c.size();
        vector<int>v(n);
        
        for(int i{};i<n;i++)
        {
            v[i]=(c[i]-r[i]);
        }
    
        sort(v.begin(),v.end());
        // for(int i:v)
        // {
        //     cout<<i<<endl;
        // }
        int ans{};
        for(int i{};i<n;i++)
        {
            if(v[i]<=ad && v[i])
            {
                 ad-=v[i];
                v[i]=0;
               
            }
        }
        for(int i:v)
        {
            if(i==0)
            {
                
                ans++;
            }
            //cout<<i<<endl;
        }
        return ans;
        
    }
};