class Solution {
public:
    int bagOfTokensScore(vector<int>& t, int p) 
    {
        int n=t.size();
        sort(t.begin(),t.end());
        int s{},e{n-1};
        int ans{};
        if(n==0)
        {
            return ans;
        }
        while(s<e)
        {
            if(p>=t[s])
            {
                ans++;
                p-=t[s];
                s++;
            }
            else
            {
                ans--;
                p+=t[e];
                e--;
            }
            if(ans<0)
            {
                ans=0;
                p=0;
                break;
            }
        }
        if(p>=t[e])
        {
            ans++;
        }
        return ans;
        
    }
};