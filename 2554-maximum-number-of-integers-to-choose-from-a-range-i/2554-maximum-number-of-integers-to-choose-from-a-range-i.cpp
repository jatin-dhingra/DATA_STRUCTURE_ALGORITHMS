class Solution {
public:
    int maxCount(vector<int>& b, int n, int maxSum) 
    {
        unordered_map<int,int>m;
        for(int i{};i<b.size();i++)
        {
            m[b[i]]=1;
        }
        long long sum{};
        int count{};
        
        for(int i{1};i<=n;i++)
        {
            
            
            if(!m[i] && sum+i<=maxSum)
            {
                sum+=i;
                count++;
                //cout<<i<<endl;
            }
        }
        return count;
    }
};