class Solution {
public:
    int maxPower(string s) 
    {
        int ans{0};
        int n=s.size();
        int count{};
        if(n<=1)
        {
            return n;
        }
        for(int i{};i<n-1;i++)
        {
            if(s[i]==s[i+1])
            {
                count++;
            }
            else
            {
                ans=max(ans,count+1);
                count=0;
            }
        }
        ans=max(ans,count+1);
        return ans;
    }
};