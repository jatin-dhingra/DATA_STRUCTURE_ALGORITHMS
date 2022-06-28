class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int m=matrix.size();
        int n=matrix[0].size();
        
        // brute force;
//         for(int i{};i<m;i++)
//         {
            
//             for(int j{};j<n;j++)
//             {
//                 if(matrix[i][j]==target)
//                 {
//                     return true;
//                 }
//             }
//         }
//         return false;
        
        // optimized 
        int i=0;
        int j=n-1;
        
        while(i>=0 && i<m && j>=0 && j<n)
        {
            if(matrix[i][j]==target)
            {
                return true;
            }
            else if(matrix[i][j]<target)
            {
                i++;
            }
            else if(matrix[i][j]>target)
            {
                j--;
            }
        }
        return false;
        
        
    }
};