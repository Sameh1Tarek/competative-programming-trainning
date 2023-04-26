//https://leetcode.com/problems/number-of-islands/

class Solution {
private:
    void bfs(int row , int col , vector<vector<int>>&vis ,vector<vector<char>> grid){
        vis[row][col]=1;
        queue<pair<int,int>>q;
        q.push({row,col});

        int n=grid.size();
        int m=grid[0].size();

        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
          //traverse in the neigbours and them if its a land
          int delRow[]={-1,1,0,0};
          int delCol[]={0,0,-1,1};
          for(int i=0 ; i<4 ; i++){
              int nRow= row + delRow[i];
              int nCol= col + delCol[i];

              if(nRow>=0 && nRow<n && nCol>=0 && nCol<m && grid[nRow][nCol]=='1' && !vis[nRow][nCol]){
                  q.push({nRow,nCol});
                  vis[nRow][nCol]=1;
              }
          }
     }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int cnt=0;

        for(int row=0 ; row<n ; row++){
            for(int col=0 ; col<m ; col++){
                if(grid[row][col]=='1' && !vis[row][col]){
                    cnt++;
                    bfs(row,col,vis,grid);
                }
            }
        }
        return cnt;
    }
};