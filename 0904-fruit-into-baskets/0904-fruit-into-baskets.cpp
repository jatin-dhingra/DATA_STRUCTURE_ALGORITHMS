class Solution {
public:
    int totalFruit(vector<int>& f) 
    {
        int ans{};
        unordered_map<int,int>m;
        
        int j{};
        int n=f.size();
        for(int i{};i<n;i++)
        {
            m[f[i]]++;
            while(m.size()>2)
            {
                if(--m[f[j]]==0)
                {
                    m.erase(f[j]);
                }
                j++;
            }
            ans=max(ans,i-j+1);
        }
        
        return ans;
    }
};