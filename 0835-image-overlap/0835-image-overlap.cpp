class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) 
    {
        int n=img1.size();
        int count{};
        
        for(int i{};i<n;i++)
        {
            for(int j{};j<n;j++)
            {
                int left{},right{},up{},down{};
                for(int a{i};a<n;a++)
                {
                    for(int b{j};b<n;b++)
                    {
                        if(img2[a][b]==1 && img1[a-i][b-j]==1) 
                        {
                            left++;
                        }
                        if(img2[a-i][b-j]==1 && img1[a][b]==1) 
                        {
                            right++;
                        }
                        if(img2[n-a-1][b]==1 && img1[n-a-1+i][b-j]==1) 
                        {
                            up++;
                        }
                        if(img2[a][n-b-1]==1 && img1[a-i][n-b-1+j]==1) 
                        {
                            down++;
                        }
                    }
                }
                if(left>count)
                {
                    count=left;
                }
                if(right>count)
                {
                    count=right;
                }
                if(up>count)
                {
                    count=up;
                }
                if(down>count)
                {
                    count=down;
                }
            }
        }
        return count;
        
    }
};