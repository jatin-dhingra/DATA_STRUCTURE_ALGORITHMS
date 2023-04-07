class Solution {
public:
    void dfs(vector<vector<int>>&grid,int i,int j,int curr,int color)
    {
        if(i<0 || j<0 || i>=grid.size()|| j>=grid[0].size() || grid[i][j]!=curr )
        {
            return;
        }
        grid[i][j]=color;
        
        dfs(grid,i-1,j,curr,color);
        dfs(grid,i+1,j,curr,color);
        dfs(grid,i,j-1,curr,color);
        dfs(grid,i,j+1,curr,color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& img, int sr, int sc, int color) 
    {
        int n=img.size();
        int m=img[0].size();
        int curr=img[sr][sc];
        if(img[sr][sc]!=color)
        {
            dfs(img,sr,sc,curr,color);
        }
        
        return img;
        
    }
};