class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<pair<int,int>> adj[n];
        for(auto it:flights)
        adj[it[0]].push_back({it[1], it[2]});
        
        int m =flights.size(); 
       vector<int> dis(n,1e9);
       queue<pair<int,pair<int,int>>> q;
       dis[src]=0;
       q.push({0,{src,0}});
      while(!q.empty()){
            auto it=q.front();
            int stops=it.first;
            int node=it.second.first;
            int cost=it.second.second;
            q.pop();
            if(stops>k) continue;
            for(auto it : adj[node]) {
                int adjNode = it.first;
                int edgeWeight = it.second;
                
                if(dis[adjNode] > cost + edgeWeight && stops<=k) {
                    dis[adjNode] = cost + edgeWeight;
                    q.push({stops+1,{adjNode,cost + edgeWeight}});
                }
            }
        }
      if(dis[dst]==1e9) return -1;
      return dis[dst];




    }
};