// https://leetcode.com/problems/the-earliest-and-latest-rounds-where-players-compete/?envType=daily-question&envId=2025-07-12

// THE EARLIEST AND LATEST ROUNDS WHERE PLAYERS COMPETE

// TDL;

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    vector<int> earliestAndLatest(int n, int firstPlayer, int secondPlayer)
    {
    }
};

int main()
{
    int n = 11, firstPlayer = 2, secondPlayer = 4;
    Solution sol;
    vector<int> vec = sol.earliestAndLatest(n, firstPlayer, secondPlayer);
    for (int i : vec)
    {
        cout << i << "  ";
    }
}