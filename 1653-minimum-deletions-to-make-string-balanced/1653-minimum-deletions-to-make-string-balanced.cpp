class Solution {
public:
    int minimumDeletions(string s)
    {
        int n=s.size();
        vector<int>pre(n,0);
        vector<int>preb(n,0);
        // prea[0]=(s[0]=='a'?1:0);
        preb[0]=(s[0]=='b'?1:0);
        int count{};
        for(int i{n-1};i>=0;i--)
        {
            if(s[i]=='a')
            {
                count++;
            }
            pre[i]=count;
        }
        
        // cout<<endl;
        count=0;
        for(int i{1};i<n;i++)
        {
            if(s[i]=='b')
            {
                preb[i]=preb[i-1]+1;
            }
            else
            {
                preb[i]=preb[i-1];
            }
        }
        int ans=INT_MAX;
        for(int i{};i<n;i++)
        {
            ans=min(ans,pre[i]+preb[i]-1);
        }
        return abs(ans);
        
        
    }
};