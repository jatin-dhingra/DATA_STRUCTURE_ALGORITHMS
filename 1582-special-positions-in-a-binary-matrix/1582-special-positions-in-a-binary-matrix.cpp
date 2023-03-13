class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) 
    {
        int n=mat.size();
        int m=mat[0].size();
        vector<int>row(n);
        vector<int>col(m);
        
        for(int i{};i<n;i++)
        {
            for(int j{};j<m;j++)
            {
                if(mat[i][j]==1)
                {
                    row[i]++;
                    col[j]++;
                }
            }
        }
        int count{};
        for(int i{};i<n;i++)
        {
            for(int j{};j<m;j++)
            {
                if(mat[i][j]==1 && row[i]==1 && col[j]==1)
                {
                    count++;
                }
            }
        }
        return count;
        
    }
};