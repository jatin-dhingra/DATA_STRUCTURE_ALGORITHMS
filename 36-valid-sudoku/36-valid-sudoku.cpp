class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board)
    {
        vector<set<int>>row(9);
        vector<set<int>>col(9);
        vector<set<int>>matrix(9);
        
        for(int i{};i<9;i++)
        {
            for(int j{};j<9;j++)
            {
                if(board[i][j] == '.')
                {
                    continue;
                }
                int val=board[i][j];
                if(row[i].count(val)||col[j].count(val) || matrix[(i/3)*3 + j/3].count(val))
                {
                    return false; 
                }
                
                row[i].insert(val);
                col[j].insert(val);
                matrix[(i/3*3) + j/3].insert(val);
            }
        }
        
        return true;
    }
};