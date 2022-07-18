class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) 
    {
        int m=matrix.size(),n=matrix[0].size();
        vector<vector<int>> sums(m+1,vector<int>(n+1,0));
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                sums[i+1][j+1]=sums[i+1][j]+sums[i][j+1]+matrix[i][j]-sums[i][j];
            }
        int ans=0;
        
        for(int j=1;j<=n;j++){
            for(int k=0;k<j;k++){
                unordered_map<int,int> dd;
                for(int i=0;i<=m;i++){
                    int d=sums[i][j]-sums[i][k]-target;
                    if(dd.find(d)!=dd.end()) {
                        ans+=dd[d];
                    }
                    
                    d=sums[i][j]-sums[i][k];
                    if(dd.find(d)==dd.end()) dd[d]=1;
                    else dd[d]++;
                }
            }
        }
        return ans;
    }
};