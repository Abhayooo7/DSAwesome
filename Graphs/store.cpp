#include<iostream>
#include<vector>

using namespace std;

int main(){
    //using adjacency matrix
    // int n , m;
    // cin>>n>>m;

    // int adj[n+1][m+1];

    // for(int i=0;i<m;i++){
    //     int u,v;
    //     cin>>u>>v;

    //     adj[u][v] = 1;
    //     adj[v][u] = 1;
    // }

    int n,m;
    cin>>n,m;

    vector<int> adj [n+1];

    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);//not required in case of directed graph
    }


    return 0;
}