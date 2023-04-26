https://leetcode.com/problems/flood-fill/

# Code
```
class Solution {
private:
    void dfs(int start,vector<vector<int>>& image, int sr, int sc, int color,vector<vector<int>>&vis){
        vis[sr][sc]=1;
        image[sr][sc]=color;
        int n=image.size();
        int m=image[0].size();

        int delRow[]={1,-1,0,0};
        int delCol[]={0,0,-1,1};
        for(int i=0 ; i<4 ; i++){
            int nRow=sr+delRow[i];
            int nCol=sc+delCol[i];

            if(nRow>=0 && nRow<n && nCol>=0 && nCol<m && image[nRow][nCol]==start && !vis[nRow][nCol]){
                dfs(start,image,nRow,nCol,color,vis);
            }
        }

    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        int start=image[sr][sc];
        dfs(start,image,sr,sc,color,vis);
        return image;
    }
};
```