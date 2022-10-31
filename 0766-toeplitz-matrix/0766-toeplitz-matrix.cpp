class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        
        
        for(int i{};i<n-1;i++)
        {
            for(int j{};j<m-1;j++)
            {
                if(matrix[i][j]!=matrix[i+1][j+1])
                {
                    return 0;
                }
            }
        }
        return 1;
        
        
    }
};