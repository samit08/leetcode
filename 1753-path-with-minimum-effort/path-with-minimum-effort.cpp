class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
       priority_queue<pair<int,pair<int, int>>, vector<pair<int,pair<int, int>>>, greater<pair<int,pair<int, int>>>> pq;  
        int n=heights.size(); 
        int m=heights[0].size();
        vector<vector<int>> diff(n,vector<int>(m,1e9));
        diff[0][0]=0;
        pq.push({0,{0,0}});
        while(!pq.empty()){
            auto it=pq.top();
            int dist=it.first;
            int r=it.second.first;
            int c=it.second.second;
            pq.pop();
            if(r==n-1&&c==m-1) return dist;
            int rr[4] = {-1, 0, 1, 0}; 
            int cc[4] = {0, 1, 0, -1};
              for(int i=0;i<4;i++){
                int newr=r+rr[i];
               int newc = c + cc[i];
                if(newr>=0 &&newc>=0 &&newr<n&&newc<m){
                    int neweffort=max(abs(heights[r][c]-heights[newr][newc]),dist);
                   if(neweffort <diff[newr][newc]){
                     diff[newr][newc]= neweffort;
                    pq.push({neweffort,{newr,newc}});
                }
            }
        }
        }
        return 0;
    }
};