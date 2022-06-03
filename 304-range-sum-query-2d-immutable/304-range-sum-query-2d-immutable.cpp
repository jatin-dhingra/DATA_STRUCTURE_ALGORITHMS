class NumMatrix {
public:
    vector<vector<int>>pre;
    NumMatrix(vector<vector<int>>& matrix) 
    {
        int n=matrix.size();
        int m=matrix[0].size();
        pre=vector<vector<int>>(n+1,vector<int>(m+1,0));
        for(int i{1};i<=n;i++)
        {
            for(int j{1};j<=m;j++)
            {
                pre[i][j]=pre[i-1][j]+pre[i][j-1]-pre[i-1][j-1]+matrix[i-1][j-1];
            }
        }
        
    }
    
     int sumRegion(int r1, int c1, int r2, int c2) {
		// Since our `sum` starts by 1 so we need to increase r1, c1, r2, c2 by 1
        r1++; c1++; r2++; c2++; 
        return pre[r2][c2] - pre[r2][c1 - 1] - pre[r1 - 1][c2] + pre[r1 - 1][c1 - 1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */