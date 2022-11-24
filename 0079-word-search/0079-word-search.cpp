class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) 
    {
        int n=board.size();
        int m=board[0].size();
        
        for(int i{};i<n;i++)
        {
            for(int j{};j<m;j++)
            {
                if(dfs(board,word,i,j))
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool dfs(vector<vector<char>>&board,string &word,int x,int y)
    {
        if (!word.size())
            return true;
        if(x<0|| x>=board.size() || y<0 || y>=board[0].size() || board[x][y]!=word[0])
        {
            return false;
        }
        
        char curr=board[x][y];
        board[x][y]='*';
        string k=word.substr(1);
        bool check = dfs(board,k, x-1, y) || dfs(board,k, x+1, y) || dfs(board,k, x, y-1) || dfs(board,k, x, y+1);
        board[x][y] = curr;
        return check;
        
        
    }
};