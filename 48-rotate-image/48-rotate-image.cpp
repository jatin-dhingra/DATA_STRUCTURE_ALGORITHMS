class Solution {
public:
    void rotate(vector<vector<int>>& m) 
    {
        for(int i{};i<m.size();i++)
        {
            for(int j{};j<i;j++)
            {
                swap(m[i][j],m[j][i]);
            }
        }
        for(int i{};i<m.size();i++)
        {
            reverse(m[i].begin(),m[i].end());
        }
        
        
    }
};