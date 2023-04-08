class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat)
    {
        vector<int>ans;
        int n=mat.size();
        int m=mat[0].size();
        int row1=0,row2=n-1;
        int col1=0,col2=m-1;
        
        while(row1<=row2 && col1<=col2)
        {
            
            for(int i=col1;i<=col2;i++)
            {
                ans.push_back(mat[row1][i]);
            }
            for(int i=row1+1;i<=row2;i++)
            {
                ans.push_back(mat[i][col2]);
            }
            if(row1<row2 && col1<col2)
            {
                for(int i=col2-1;i>col1;i--)
                {
                    ans.push_back(mat[row2][i]);
                }
                for(int i=row2;i>row1;i--)
                {
                    ans.push_back(mat[i][col1]);
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