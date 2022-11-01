class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) 
    {
        int m=grid.size();
        int n=grid[0].size();
        vector<int>ans(n);
        for(int i =0; i< n; i++){
            int r = 0; 
            int c = i;
            while(r<m && c<n ){
                
                if(c<n-1 && grid[r][c]==grid[r][c+1] && grid[r][c] == 1)
                {
                    r = r+1; 
                    c = c+1;
                }
                else if(c >0 && grid[r][c] == grid[r][c-1] && grid[r][c] == -1)
                {
                    r = r+1;
                    c= c-1;
                    
                }
                else
                {
                    ans[i] = -1; 
                    break;
                }
            }
            if(ans[i] != -1){
                ans[i]=c;
            }
        }
        return ans;
        
        
    }
};