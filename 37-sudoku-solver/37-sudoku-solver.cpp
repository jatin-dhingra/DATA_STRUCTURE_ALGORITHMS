class Solution {
public:
    bool check(vector<vector<char>>& board)
    {
        for(int i{};i<board.size();i++)
        {
            for(int j{};j<board[0].size();j++)
            {
                if(board[i][j]=='.')
                {
                    for(char c='1';c<='9';c++)
                    {
                        if(isvalid(i,j,c,board))
                        {
                            board[i][j]=c;
                            if(check(board)==true)
                            {
                                return true;
                            }
                            else
                            {
                                board[i][j]='.';
                            }
                        }
                        
                    }return false;
                    
                }
            }
        }
        return true;
    }
    
    bool isvalid(int row,int col,char c,vector<vector<char>>&board)
    {
        for(int i{0};i<9;i++)
        {
            if(board[row][i]==c)
            {
                return false;
            }
            if(board[i][col]==c)
            {
                return false;
            }
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c)
            {
                return false;
            }
        }
        return true;
    }
    
    void solveSudoku(vector<vector<char>>& board) 
    {
        check(board);
    }
};