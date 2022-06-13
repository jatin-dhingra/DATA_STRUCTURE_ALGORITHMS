class Solution {
public:
    
    void solve(vector<int>&leftrow,vector<int>&lower,vector<int>&upper,vector<vector<string>>&ans,vector<string>&board,int col,int n)
    {
        if(col==n)
        {
            
            ans.push_back(board);
            return;
        }
        
        for(int row=0;row<n;row++)
        {
            if(leftrow[row]==0 && upper[n-1+col-row]==0 && lower[row+col]==0)
            {
                board[row][col]='Q';
                leftrow[row]=1;
                lower[row+col]=1;
                upper[n-1+col-row]=1;
                solve(leftrow,lower,upper,ans,board,col+1,n);
                board[row][col]='.';
                leftrow[row]=0;
                lower[row+col]=0;
                upper[n-1+col-row]=0;
            }
        }
        
    }
    
    vector<vector<string>> solveNQueens(int n) 
    {
        
        // by JATIN DHINGRA
        //requirements track of leftrow, upperdiagonal, lowerdiagonal
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        
        for(int i{};i<n;i++)
        {
            board[i]=s;
        }
        
        vector<int>leftrow(n,0);
        vector<int>lower(2*n-1,0);
        vector<int>upper(2*n-1,0);
        
        solve(leftrow,lower,upper,ans,board,0,n);
        
        return ans;
        
    }
};