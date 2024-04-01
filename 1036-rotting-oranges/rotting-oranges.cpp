class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
    
    int n=grid.size();
    int m=grid[0].size();
    vector<vector<int>> vis(n,vector<int>(m,0));
    queue<pair<pair<int,int>,int>> q;
   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==2){
                q.push({{i,j},0});
                vis[i][j]=2;

            }
        }
    }
    int tm=0;
    while(!q.empty())
    {
        int r=q.front().first.first;
        int c=q.front().first.second;
        int t=q.front().second;
        q.pop();
        tm = max(tm, t);
         int dx[4]={-1,0,1,0};
        int dy[4]={0,1,0,-1};
        for(int i=0;i<4;i++)
        {
            int nrow = r + dx[i];
            int ncol = c + dy[i];
                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && 
                     grid[nrow][ncol] == 1 && vis[nrow][ncol]!=2) {
                    vis[nrow][ncol] = 2;
                    q.push({{nrow, ncol},t+1});
                }
        }
    }

 for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
        if(grid[i][j] == 1 && vis[i][j] == 0) {
            return -1;
        }
    }
}
    
    return tm;



        
    }
};