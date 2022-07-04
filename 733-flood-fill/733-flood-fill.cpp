class Solution {
public:
    
    void DFS(vector<vector<int>>&img,int x,int y,int set,int newColor)
    {
        if(x<0 || y<0 || x>=img.size()|| y>img[0].size()|| img[x][y]!=set)
        {
            return;
        }
        img[x][y]=newColor;
        DFS(img,x-1,y,set,newColor);
        DFS(img,x+1,y,set,newColor);
        DFS(img,x,y-1,set,newColor);
        DFS(img,x,y+1,set,newColor);
        
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& img, int sr, int sc, int newColor) 
    {
         if(img[sr][sc]==newColor)
         {
            return img;
         }
        int set=img[sr][sc];
        DFS(img,sr,sc,set,newColor);
        return img;
        
    }
};