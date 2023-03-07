class Solution {
public:
    int maxCoins(vector<int>& piles) 
    {
        int n=piles.size();
        sort(piles.rbegin(),piles.rend());
        int ans{};
     
        int k=1;
        int i=1;
        while(k<=n-i)
        {
           // cout<<piles[k]<<" ";
            ans+=piles[k];
            k+=2;
            i++;
        }
        return ans;
        
    }
};