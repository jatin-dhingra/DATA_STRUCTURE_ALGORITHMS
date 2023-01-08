class Solution {
public:
    int maxPoints(vector<vector<int>>& m) 
    {
        int count{};
        int n=m.size();
        if(n<=2)
        {
            return n;
        }
        
        int mini=2;
        for(int i{};i<n;i++)
        {
            for(int j{i+1};j<n;j++)
            {
                int total=2;
                for(int k{};k<n;k++)
                {
                    if(i!=k && j!=k)
                    {
                        if((m[j][1]-m[i][1])*(m[k][0]-m[i][0])==(m[k][1]-m[i][1])*(m[j][0]-m[i][0]))
                        {
                            total++;
                        }
                    }
                }
                mini=max(mini,total);
            }
        }
        return mini;
        
    }
};