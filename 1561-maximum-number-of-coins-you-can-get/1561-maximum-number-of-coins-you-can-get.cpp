class Solution {
public:
    int maxCoins(vector<int>& piles) 
    {
        int n=piles.size();
        sort(piles.begin(),piles.end());
        reverse(piles.begin(),piles.end());
        int ans{};
        // for(int i:piles)
        // {
        //     cout<<i<<" ";
        // }
        // cout<<endl;
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