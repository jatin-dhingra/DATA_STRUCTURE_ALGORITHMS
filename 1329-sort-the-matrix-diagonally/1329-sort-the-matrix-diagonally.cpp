class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) 
    {
        int n=mat.size();
        for(int i{};i<n-1;i++)
        {
            for(int j{};j<n-1;j++)
            {
                for(int k{};k<mat[j].size()-1;k++)
                {
                    if(mat[j][k]>mat[j+1][k+1])
                    {
                        swap(mat[j][k],mat[j+1][k+1]);
                    }
                }
            }
        }
        return mat;
        
    }
};