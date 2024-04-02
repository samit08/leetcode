class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
     int n=grid.size();
    int m=grid[0].size();
    vector<vector<int>> vis(n,vector<int>(m,0));
    queue<pair<int,int>> q;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if ((i == 0 || j == 0 || i == n - 1 || j == m - 1) && grid[i][j] == 1) {
          q.push({i, j});
          vis[i][j] = 1;
}

         }
    }
    while(!q.empty())
    {
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
         int dx[4]={-1,0,1,0};
        int dy[4]={0,1,0,-1};
        for(int i=0;i<4;i++)
        {
            int nrow = r + dx[i];
            int ncol = c + dy[i];
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && 
                     vis[nrow][ncol]==0&& grid[nrow][ncol] == 1) {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
        }
    }
        int cnt=0;
        
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(vis[i][j]==0 && grid[i][j]==1)
                cnt++;           
         }
    }
        return cnt;
    }
 
};