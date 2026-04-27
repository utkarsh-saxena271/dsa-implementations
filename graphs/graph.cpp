#include <iostream>
#include <queue>

using namespace std;
vector<int> BFS(int v, vector<vector<int>> adj){
    vector<int> vis(v,0);
    vis[0] = 1;
    queue<int> q;
    vector<int> bfs;
    q.push(0); 
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);
        vis[node] = 1;
        for(auto it : adj[node]){
            if(vis[it] == 0){
                q.push(it);
                vis[it] = 1;
            }
        }
    }
    return bfs; 
}

int main(){
    int n,m;
    cin >> n >> m;
    // adjacency matrix;
    // int adj[n+1][m+1];
    // for(int i = 0; i < m+1; i++){
    //     int u,v;
    //     cin >> u >> v;
    //     adj[u][v] = 1;
    //     adj[v][u] = 1;
    // }

    // adjacency list
    vector<vector<int>> adjlist(n);
    for(int i = 0; i < m; i++){
        int u,v;
        cin >> u >> v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    return 0;
}