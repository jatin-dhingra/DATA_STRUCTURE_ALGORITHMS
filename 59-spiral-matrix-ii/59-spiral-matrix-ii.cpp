class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        vector<vector<int>>ans(n,vector<int>(n));
        int r0=0,r1=n-1,c0=0,c1=n-1;
        int count{1};
       while(r0<=r1 && c0<=c1)
       {
           for(int i=c0;i<=c1;i++)
           {
               ans[r0][i]=count++;
           }
           
           for(int j=r0+1;j<=r1;j++)
           {
               ans[j][c1]=count++;
           }
           
           if(r0<r1 && c0<c1)
           {
               for(int i=c1-1;i>c0;i--)
               {
                   ans[r1][i]=count++;
               }
               for(int i=r1;i>r0;i--)
               {
                   ans[i][c0]=count++;
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