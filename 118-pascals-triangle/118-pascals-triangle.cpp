class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        int n=numRows;
        vector<vector<int>>nums(n);
        
        for(int i{};i<n;i++)
        {
            nums[i].resize(i+1);
            nums[i][0]=nums[i][i]=1;
            for(int j=1;j<i;j++)
            {
                nums[i][j]=nums[i-1][j-1]+nums[i-1][j];
            }
        }
        return nums;
        
    }
};