https://leetcode.com/problems/flood-fill/

# Code
```
class Solution {
private:
    void bfs(vector<vector<int>>& image, int sr, int sc, int color,vector<vector<int>>&vis){
        int start=image[sr][sc];
        vis[sr][sc]=color;
        image[sr][sc]=color;
        queue<pair<int,int>>q;
        q.push({sr,sc});
        int n=image.size();
        int m=image[0].size();

    while(!q.empty()){
        int row=q.front().first;
        int col=q.front().second;
        q.pop();

        int delRow[]={1,-1,0,0};
        int delCol[]={0,0,1,-1};
        for(int i=0 ; i<4 ; i++){
            int nRow= row + delRow[i];
            int nCol= col + delCol[i];

            if(nRow>=0 && nRow<n  && nCol>=0 && nCol<m && image[nRow][nCol]==start && !vis[nRow][nCol]){
                vis[nRow][nCol]=1;
                image[nRow][nCol]=color;
                q.push({nRow,nCol});
            }
        }
    }

    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        bfs(image,sr,sc,color,vis);
        return image;
    }
};
```