class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        
        vector<int>ans;
        int row1=0;
        int row2=n-1;
        int col1=0;
        int col2=m-1;
        
        while(row1<=row2 && col1<=col2)
        {
            for(int i=col1;i<=col2;i++)
            {
                ans.push_back(matrix[row1][i]);
            }
            for(int i=row1+1;i<=row2;i++)
            {
                ans.push_back(matrix[i][col2]);
            }
            if(row1<row2 && col1<col2)
            {
                for(int i=col2-1;i>col1;i--)
                {
                    ans.push_back(matrix[row2][i]);
                }
                for(int i=row2;i>row1;i--)
                {
                    ans.push_back(matrix[i][col1]);
                }
            }
            row1++;
            row2--;
            col1++;
            col2--;
        }
        return ans;
        
        
        
    }
};