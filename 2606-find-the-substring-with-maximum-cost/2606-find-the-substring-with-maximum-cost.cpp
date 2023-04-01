class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) 
    {
        int n=s.size();
        int m=chars.size();
        vector<int>pre(n);
        for(int i{};i<n;i++)
        {
            for(int j{};j<m;j++)
            {
                if(chars[j]==s[i])
                {
                    pre[i]=vals[j];
                    break;
                }
                else
                {
                    pre[i]=s[i]-'a'+1;
                }
            }
        }
        int ans{INT_MIN};
        int sum{};
        for(int i:pre)
        {
            sum+=i;
            ans=max(sum,ans);
            sum=max(sum,0);
        }
        return ans<0?0:ans;
    }
    
};