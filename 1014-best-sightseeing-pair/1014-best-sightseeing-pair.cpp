class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) 
    {
        int ans{INT_MIN};
        int n=values.size();
        int val=values[0]+0;
        for(int i{1};i<n;i++)
        {
            ans=max(ans,val+values[i]-i);
            val=max(val,values[i]+i);
        }
        return ans;
    }
};