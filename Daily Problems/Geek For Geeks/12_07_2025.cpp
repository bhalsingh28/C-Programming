// GOLD MINE PROBLEM

// https://www.geeksforgeeks.org/problems/gold-mine-problem2608/1

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

// -------------------------------------------------------------------

// class Solution
// {
// public:
//     int count = 0;
//     int dfs(vector<vector<int>> &mat, int x, int y)
//     {
//         if (x < 0 || x >= mat.size() || y < 0 || y >= mat[0].size())
//             return 0;
//         int curr = mat[x][y];
//         int maxFromNext = max({dfs(mat, x - 1, y + 1), dfs(mat, x, y + 1), dfs(mat, x + 1, y + 1)});
//         return curr + maxFromNext;
//     }
//     int maxGold(vector<vector<int>> &mat)
//     {
//         int gold = INT_MIN;
//         for (int i = 0; i < mat.size(); i++)
//             gold = max(gold, dfs(mat, i, 0));
//         return gold;
//     }
// };

// -------------------------------------------------------------------

class Solution
{
public:
    vector<vector<int>> dp;
    int dfs(vector<vector<int>> &mat, int x, int y)
    {
        if (x < 0 || x >= mat.size() || y < 0 || y >= mat[0].size())
            return 0;
        if (dp[x][y] != -1)
            return dp[x][y];
        int curr = mat[x][y];
        int maxFromNext = max({dfs(mat, x - 1, y + 1), dfs(mat, x, y + 1), dfs(mat, x + 1, y + 1)});
        return dp[x][y] = curr + maxFromNext;
    }
    int maxGold(vector<vector<int>> &mat)
    {
        dp = vector<vector<int>>(mat.size(), vector<int>(mat[0].size(), -1));
        int gold = INT_MIN;
        for (int i = 0; i < mat.size(); i++)
            gold = max(gold, dfs(mat, i, 0));
        return gold;
    }
};

// -------------------------------------------------------------------

int main()
{
    Solution sol;
    vector<vector<int>> mat = {{1, 3, 3}, {2, 1, 4}, {0, 6, 4}};
    int Gold = sol.maxGold(mat);
    cout << Gold << endl;
}
