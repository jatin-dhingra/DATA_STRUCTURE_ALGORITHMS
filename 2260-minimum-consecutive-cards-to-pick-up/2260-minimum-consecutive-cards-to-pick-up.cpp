class Solution {
public:
    int minimumCardPickup(vector<int>& cards)
    {
        int ans=INT_MAX;
        unordered_map<int,int>m;
        for(int i{};i<cards.size();i++)
        {
            if(m.find(cards[i])!=m.end())
            {
                ans=min(ans,i-m[cards[i]]+1);
            }
            m[cards[i]]=i;
        }
        return (ans==INT_MAX?-1:ans);
        
    }
};