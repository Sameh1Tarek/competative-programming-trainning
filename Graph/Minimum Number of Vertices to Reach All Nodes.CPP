//https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/

class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>inDegree(n,0);
        for(int i=0 ; i<edges.size() ; i++){
            inDegree[edges[i][1]]++;
        }

        vector<int>ans;
        for(int i=0 ; i<n ; i++){
            if(!inDegree[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
};