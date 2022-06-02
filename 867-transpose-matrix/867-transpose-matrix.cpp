class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>ans(m,vector<int>(n,0));
        
        for(int i{};i<n;i++)
        {
            for(int j{};j<m;j++)
            {
                ans[j][i]=matrix[i][j];
                
            }
        }
        return ans;
        
        
    }
};