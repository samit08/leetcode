//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
  bool dfs(int node, vector<int> adj[], int vis[], int pathvis[]) {
    vis[node] = 1;
    pathvis[node] = 1;
    for (auto it : adj[node]) {
        if (!vis[it]) {
            if (dfs(it, adj, vis, pathvis))
                return true;
        } else if (pathvis[it]) {
            return true;
        }
    }
    pathvis[node] = 0;
    return false;
}

  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int v, vector<int> adj[]) {
        int vis[v]={0};
         int pathvis[v]={0};
         for(int i=0;i<v;i++){
             if(!vis[i]){
              if(  dfs(i,adj,vis,pathvis)==true) return true;
             }
         }
         return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends