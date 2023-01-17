class Solution {
public:
    // int solve(string s,int ind)
    // {
    //     if(ind<=0)
    //     {
    //         return 0;
    //     }
    //     int v1=solve(s,ind-1)+(s[ind]=='0'&& s[ind-1]=='1'?1:0);
    //     int v2=solve(s,ind-2)+1;
    //     return min(v1,v2);
    // }
    int minFlipsMonoIncr(string s) 
    {
        int n=s.size();
        int count{};
        int ans{};
        for(char c:s)
        {
            if(c=='1')
            {
                count++;
            }
            else
            {
                ans=min(ans+1,count);
            }
        }
        return ans;
        
        
    }
};