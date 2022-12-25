class Solution {
public:
    int closetTarget(vector<string>& w, string t, int st) 
    {
        int n=w.size();
        int ans{INT_MAX};
        
        for(int i{};i<n;i++)
        {
            if(w[i]==t)
            {
                int k=min(abs(st-i),n-abs(st-i));
                ans=min(ans,k);
            }
        }
        if(ans==INT_MAX)
        {
            return -1;
        }
        return ans;
        
    }
};