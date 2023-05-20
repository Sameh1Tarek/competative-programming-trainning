//https://leetcode.com/problems/evaluate-division/

class Solution {
private:
    void dfs(string source,string des,unordered_map<string,vector<pair<string,double>>>graph,set<string>vis,double &ans,double temp){
        vis.insert(source);
        if(source==des){
            ans=temp;
            return;
        }
        for(auto it : graph[source]){
           if(!vis.count(it.first)) {
               dfs(it.first,des,graph,vis,ans,temp*it.second);
           }
        }
    }
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {

        unordered_map<string,vector<pair<string,double>>>graph;
        for(int i=0 ; i<equations.size() ; i++){
            graph[equations[i][0]].push_back({equations[i][1],values[i]});
            graph[equations[i][1]].push_back({equations[i][0],1/values[i]});
        }

        set<string>vis;
        vector<double>res(queries.size());
        for(int i=0 ; i<queries.size() ; i++){
            string source=queries[i][0];
            string des=queries[i][1];
            double ans=-1;

            vis.clear();
            if(graph.count(source)){
                dfs(source,des,graph,vis,ans,1.0);
            }

            res[i]=ans;
        }

        return res;
    }
};