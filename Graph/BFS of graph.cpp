//https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
    int vis[V] = {0};
    vis[0] = 1;
    queue<int> q;
    // push the initial starting node
    q.push(0);
    vector<int> bfs;
    // iterate till the queue is empty
    while(!q.empty()) {
        // get the top most element in the queue
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        // traverse for all its neighbours
        for(auto it : adj[node]) {
            // if the neighbour has previously not been visited,
            // store in Q and mark as visited
            if(!vis[it]) {
                vis[it] = 1;
                q.push(it);
            }
        }
    }
    return bfs;
}