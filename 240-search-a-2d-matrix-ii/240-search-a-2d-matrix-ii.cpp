class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {
        int s=0;
        int e=matrix[0].size()-1;
        int n=matrix.size();
        
        while(s<n && e>=0)
        {
            if(matrix[s][e]==target)
            {
                return true;
            }
            else if(matrix[s][e]>target)
            {
                e--;
            }
            else
            {
                s++;
            }
        }
        return false;
        
    }
};