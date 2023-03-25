#include <iostream>
#include<vector>

using namespace std;

// } Driver Code Ends
class Solution {
  private:
  void dfs(int st, vector<int> adj[], int vis[], vector<int> &ls){
      vis[st] = 1;
      ls.push_back(st);
      
      for(auto it:adj[st]){
          if(!vis[it]){
              dfs(it,adj,vis,ls);
          }
      }
  }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        int vis[V] = {0};
        int st = 0;
        vector<int> ls;
        dfs(st,adj,vis,ls);
        return ls;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
    }
}