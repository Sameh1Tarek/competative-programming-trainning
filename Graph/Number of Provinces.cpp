//https://leetcode.com/problems/number-of-provinces/
class Solution {
private:
    void dfs(int node ,vector<int>&vis , vector<int>adjList[]){
        vis[node]=1;
        for(auto it : adjList[node]){
            if(!vis[it]){
                dfs(it,vis,adjList);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int>adjList[isConnected.size()];

        //to change adjacency matrix to list
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected.size();j++){
                if(isConnected[i][j]==1 && i!=j){
                    adjList[i].push_back(j);
                    //adjList[j].push_back(i);
                }
            }
        }

        vector<int>vis(isConnected.size(),0);
        int cnt=0;

        for(int i=0;i<isConnected.size();i++){
            if(!vis[i]){
                 cnt++;
                dfs(i,vis,adjList);
            }
        }

        return cnt;
    }
};