class Solution {
public:
    int totalFruit(vector<int>& fruits) 
    {
        int ans{};
        unordered_map<int,int>m;
        
        int left{};
        int n=fruits.size();
        for(int r{};r<n;r++)
        {
            m[fruits[r]]++;
            while(m.size()>2)
            {
                if(--m[fruits[left]]==0)
                {
                    m.erase(fruits[left]);
                }
                left++;
            }
            ans=max(ans,r-left+1);
        }
        
        return ans;
    }
};