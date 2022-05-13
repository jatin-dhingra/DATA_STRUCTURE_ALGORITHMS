class Solution {
public:
    int kthFactor(int n, int k) 
    {
        vector<int>v;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                v.push_back(i);
            }
        }
        return (v.size()<k?-1:v[k-1]);
        
    }
};