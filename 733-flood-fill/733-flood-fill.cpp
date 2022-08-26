class Solution {
public:
    void dfs(vector<vector<int>>&image, int x, int y, int color,int currcolor)
    {
        if(x<0 || y<0|| x>=image.size()|| y>=image[0].size() || image[x][y]!=currcolor)
        {
            return;
        }
        image[x][y]=color;
        dfs(image,x-1,y,color,currcolor);
        dfs(image,x+1,y,color,currcolor);
        dfs(image,x,y+1,color,currcolor);
        dfs(image,x,y-1,color,currcolor);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) 
    {
        int currcolor=image[sr][sc];
        if(image[sr][sc]!=color)
        {
            dfs(image,sr,sc,color,currcolor);
        }
        return image;
    }
};