class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) 
    {
        int m=matrix.size();
        int n=matrix[0].size();
        
        vector<int>ans;
        
        int r0=0,r1=m-1;
        int c0=0,c1=n-1;
        
        while(r0<=r1 && c0<=c1)
        {
            for(int i=c0;i<=c1;i++)
            {
                ans.push_back(matrix[r0][i]);
            }
            for(int i=r0+1;i<=r1;i++)
            {
                ans.push_back(matrix[i][c1]);
            }
            
            if(r0<r1 && c0<c1)
            {
                for(int i=c1-1;i>c0;i--)
                {
                    ans.push_back(matrix[r1][i]);
                }
                for(int i=r1;i>r0;i--)
                {
                    ans.push_back(matrix[i][c0]);
                }
            }
            r0++;
            r1--;
            c0++;
            c1--;
        }
        return ans;
            
        
    }
};