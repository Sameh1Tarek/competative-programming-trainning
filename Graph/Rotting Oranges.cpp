//https://leetcode.com/problems/rotting-oranges/

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int vis[n][m];
        //{{row,col},time}
        queue<pair<pair<int,int>,int>>q;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }else{
                     vis[i][j]=0;
                }
            }
        }
        int time=0;
        while(!q.empty()){
            int row= q.front().first.first;
            int col= q.front().first.second;
            int tm= q.front().second;
            q.pop();

            time=max(time,tm);
            int delRow[]={1,0,-1,0};
            int delCol[]={0,1,0,-1};
            for(int i=0 ; i<4 ;i++){
                int nRow= row+delRow[i];
                int nCol= col+delCol[i];
                if(nRow>=0 && nRow<n && nCol>=0 && nCol<m && grid[nRow][nCol]==1 && !vis[nRow][nCol]){
                    grid[nRow][nCol]=2;
                    vis[nRow][nCol]=2;
                    q.push({{nRow,nCol},tm+1});
                }
            }

        }

         for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<m ; j++){
                if(vis[i][j]!=2 && grid[i][j]==1){
                    return -1;
                }
            }
        }

        return time;

    }
};