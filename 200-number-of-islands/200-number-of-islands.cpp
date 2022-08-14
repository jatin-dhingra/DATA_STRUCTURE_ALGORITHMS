class Solution {
public:
    void DFS(int x,int y,vector<vector<char>>&nums)
    {
        if(x<0 || y<0 || x>=nums.size()|| y>=nums[0].size()|| nums[x][y]=='0')
        {
            return;
        }
        nums[x][y]='0';
        DFS(x+1,y,nums);
        DFS(x-1,y,nums);
        DFS(x,y+1,nums);
        DFS(x,y-1,nums);
    }
    int numIslands(vector<vector<char>>& nums) 
    {
        
        int count{};
        int n=nums.size();
        int m=nums[0].size();
        for(int i{};i<n;i++)
        {
            for(int j{};j<m;j++)
            {
                if(nums[i][j]=='1')
                {
                    count++;
                    DFS(i,j,nums);
                }
            }
        }
        return count;
        
    }
};