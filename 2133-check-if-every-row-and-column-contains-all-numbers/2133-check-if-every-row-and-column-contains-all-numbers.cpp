class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) 
    {
        
        int n=matrix.size();
        vector<set<int>>row(n);
        vector<set<int>>col(n);
        
        for(int i{};i<n;i++)
        {
            for(int j{};j<n;j++)
            {
                int val=matrix[i][j];
                if(row[i].count(val) || col[j].count(val))
                {
                    return false;
                }
                row[i].insert(val);
                col[j].insert(val);
            }
        }
        return true;
        
    }
};