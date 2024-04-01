class Solution {
    private:
   void bfs(int row, int col, vector<vector<int>>& vis, vector<vector<char>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    vis[row][col] = 1;
    queue<pair<int, int>> q;
    q.push({row, col});
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        // for (int delrow = -1; delrow <= 1; delrow++) {
        //     for (int delcol = -1; delcol <= 1; delcol++) {
        //         int nrow = x + delrow;
        //         int ncol = y + delcol;
        //         if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n && grid[nrow][ncol] == '1' && !vis[nrow][ncol]) {
        //             vis[nrow][ncol] = 1;
        //             q.push({nrow, ncol});
        //         }
        //     }
        // }
        int dx[4]={-1,0,1,0};
        int dy[4]={0,1,0,-1};
        for(int i=0;i<4;i++)
        {
            int nrow = x + dx[i];
                int ncol = y + dy[i];
                if (nrow >= 0 && nrow < m && ncol >= 0 && ncol < n && grid[nrow][ncol] == '1' && !vis[nrow][ncol]) {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
        }
    }
}

public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m =grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        int cnt=0;
        for(int row =0;row<n;row++)
        {
            for(int col=0;col<m;col++)
            { 
                if(!vis[row][col] && grid[row][col]=='1'){
                    cnt++;
                    bfs(row,col,vis,grid);
                }
            }
        }
        return cnt;



    }
};