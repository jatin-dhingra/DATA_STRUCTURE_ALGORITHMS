class Solution {
public:
    bool stoneGame(vector<int>& piles) 
    {
        stack<int>st;
        int n=piles.size();
        sort(piles.begin(),piles.end());
        for(int i{};i<n;i++)
        {
            st.push(piles[i]);
        }
        int sum1{},sum2{};
        int j=0;
        while(!st.empty())
        {
            if(j%2==0)
            {
                sum1+=st.top();
                st.pop();
                j++;
            }
            else
            {
                sum2+=st.top();
                st.pop();
                j++;
            }
        }
        return sum1>sum2;
        
    }
};