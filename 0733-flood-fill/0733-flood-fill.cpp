class Solution {
public:
    void dfs(vector<vector<int>>&img,int sr,int sc,int curr,int color)
    {
        if(sr<0 || sr>=img.size()|| sc<0 || sc>=img[0].size() || img[sr][sc]!=curr)
        {
            return;
        }
        img[sr][sc]=color;
        dfs(img,sr-1,sc,curr,color);
        dfs(img,sr+1,sc,curr,color);
        dfs(img,sr,sc+1,curr,color);
        dfs(img,sr,sc-1,curr,color);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& img, int sr, int sc, int color) 
    {
        
        int n=img.size();
        int m=img[0].size();
        int curr=img[sr][sc];
        if(curr!=color)
        {
            dfs(img,sr,sc,curr,color);
        }
        return img;
    }
};