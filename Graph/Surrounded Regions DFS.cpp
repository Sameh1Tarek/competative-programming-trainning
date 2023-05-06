https://leetcode.com/problems/surrounded-regions/

class Solution {
private:
    void dfs(int row , int col , vector<vector<int>>&vis ,  vector<vector<char>>& board){
        int n=board.size();
        int m=board[0].size();
        vis[row][col]=1;
        int delRow[]={+1,0,-1,0};
        int delCol[]={0,+1,0,-1};

        for(int i=0 ; i<4 ; i++){
            int nRow=row+delRow[i];
            int nCol=col+delCol[i];

            if(nRow>=0 && nRow<n && nCol>=0 && nCol<m && !vis[nRow][nCol]&& board[nRow][nCol]=='O'){
                dfs(nRow,nCol,vis,board);
            }
        }
    }
public:
    void solve(vector<vector<char>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        //traverse first and last row
        for(int j=0 ; j<m ; j++){
            //first
            if(!vis[0][j] && board[0][j]=='O'){
                dfs(0,j,vis,board);
            }

            //last
            if(!vis[n-1][j] && board[n-1][j]=='O'){
                dfs(n-1,j,vis,board);
            }
        }

        //traverse first and last column
        for(int i=0 ; i<n ; i++){
            //first
            if(!vis[i][0] && board[i][0]=='O'){
                dfs(i,0,vis,board);
            }

            //last
            if(!vis[i][m-1] && board[i][m-1]=='O'){
                dfs(i,m-1,vis,board);
            }
        }

        for(int i=0 ; i<n ;i++){
            for(int j=0 ; j<m ; j++){
                if(!vis[i][j] && board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
    }
};