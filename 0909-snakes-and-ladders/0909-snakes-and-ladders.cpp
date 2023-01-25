class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) 
    {
        int n=board.size();
        vector<vector<int>> vis(n,vector<int>(n,0));
        queue<int>q;
        q.push(1);
        vis[n-1][0]=1;
        int c=0;
        while(!q.empty())
        {
            int size=q.size();
            for(int i{};i<size;i++)
            {
                int curr=q.front();
                q.pop();
                if(curr==n*n)
                {
                    return c;
                }
                for(int j=1;j<=6;j++)
                {
                    int next=curr+j;
                    if(next>n*n) break;
                    int row=n-1-(next-1)/n;
                    int col=(next-1)%n;
                    if(row%2==n%2) col=n-col-1;
                    if(!vis[row][col])
                    {
                        vis[row][col]=1;
                        if(board[row][col]!=-1)
                        {
                            q.push(board[row][col]);
                        }
                        
                        else{
                            q.push(next);
                        }
                    }
                }
            }
            c++;
        }
        return -1;
        
    }
};