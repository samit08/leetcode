#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        // Initialize a dp array with the same size as grid
        vector<vector<int>> dp(m, vector<int>(n));
        
        // Start from the bottom-right corner of the grid
        for (int i = m - 1; i >= 0; --i) {
            for (int j = n - 1; j >= 0; --j) {
                if (i == m - 1 && j == n - 1) {
                    // Bottom-right corner (starting point)
                    dp[i][j] = grid[i][j];
                } else if (i == m - 1) {
                    // Bottom row (can only move right)
                    dp[i][j] = dp[i][j + 1] + grid[i][j];
                } else if (j == n - 1) {
                    // Rightmost column (can only move down)
                    dp[i][j] = dp[i + 1][j] + grid[i][j];
                } else {
                    // Choose the minimum path between right and down
                    dp[i][j] = grid[i][j] + min(dp[i + 1][j], dp[i][j + 1]);
                }
            }
        }
        
        // The result is the minimum path sum to the top-left corner
        return dp[0][0];
    }
};
