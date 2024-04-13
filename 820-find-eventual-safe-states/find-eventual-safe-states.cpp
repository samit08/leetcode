class Solution {
       private:
 bool dfs(int node,vector<vector<int>>& adj, vector<int>& vis, vector<int>& pathvis, vector<int>& check) {
    vis[node] = 1;
    pathvis[node] = 1;
    for (auto it : adj[node]) {
        if (!vis[it]) {
            if (dfs(it, adj, vis, pathvis,check))
                return true;
        } else if (pathvis[it]) {
            return true;
        }
    }
    check[node]=1;
    pathvis[node] = 0;
    return false;
}
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& adj) {
        int v=adj.size();
         vector<int> sn;
         vector<int> vis(v, 0);
        vector<int> pathvis(v, 0);
        vector<int> check(v, 0);

         for(int i=0;i<v;i++){
             if(!vis[i]){
             dfs(i,adj,vis,pathvis,check);
             }
         }
         for(int i=0;i<v;i++){
            if(check[i]==1) sn.push_back(i);
         }
         return sn;
        
    }
};