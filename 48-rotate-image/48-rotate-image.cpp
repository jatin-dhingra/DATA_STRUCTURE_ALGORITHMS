class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        
        int n=matrix.size();
        for(int i{};i<n;i++)
        {
            for(int j{};j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int i{};i<n;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
    }
};