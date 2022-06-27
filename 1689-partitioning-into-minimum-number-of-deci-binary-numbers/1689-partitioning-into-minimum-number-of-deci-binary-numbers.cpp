class Solution {
public:
    int minPartitions(string n) 
    {
        int ans{};
        
        for(char c:n)
        {
            ans=max(ans,c-'0');
        }
        return ans;
        
    }
};