// https://leetcode.com/problems/longest-increasing-path-in-a-matrix/description/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
  vector<vector<int>> dp;
  int dfs(vector<vector<int>> &matrix, int row, int col, int prev) {
    // int prev = 0 (Dont do all cases because the starts with 0.
    // [[7,7,5],[2,4,6],[8,2,0]], matrix[row][col]<=prev this condition pass and
    // it gives 0.)

    int m = matrix.size(), n = matrix[0].size();
    if (row < 0 || row >= m || col < 0 || col >= n || matrix[row][col] <= prev)
      return 0;
    if (dp[row][col] != -1)
      return dp[row][col];
    prev = matrix[row][col];
    int maxi = 1 + max({
                       dfs(matrix, row - 1, col, prev), // UP
                       dfs(matrix, row + 1, col, prev), // DOWN
                       dfs(matrix, row, col + 1, prev), // RIGHT
                       dfs(matrix, row, col - 1, prev)  // LEFT
                   });
    return dp[row][col] = maxi;
  }

  int longestIncreasingPath(vector<vector<int>> &matrix) {
    int longestPath = 0;
    int m = matrix.size(), n = matrix[0].size();
    dp = vector<vector<int>>(m, vector<int>(n, -1));
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
        longestPath = max(longestPath, dfs(matrix, i, j, INT_MIN));
      }
    }
    return longestPath;
  }
};

int main() {
  vector<vector<int>> matrix = {{9, 9, 4}, {6, 6, 8}, {2, 1, 1}};
  Solution sol;
  int ans = sol.longestIncreasingPath(matrix);
  cout << ans << endl;
}
