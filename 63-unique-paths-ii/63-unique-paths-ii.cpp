class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
	int x= obstacleGrid.size();
	int y= obstacleGrid[0].size();
	vector<int> dp(y,0);
	dp[0]=1;
        
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<y;j++)
		{
			if(obstacleGrid[i][j])
				dp[j]=0;
			else if(j>0)
				dp[j] += dp[j-1];
		}
	}
        
	return dp[y-1];
    }
};