// https://leetcode.com/problems/maximum-matching-of-players-with-trainers/?envType=daily-question&envId=2025-07-13

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
  int matchPlayersAndTrainers(vector<int> &players, vector<int> &trainers) {
    sort(players.begin(), players.end());
    sort(trainers.begin(), trainers.end());
    int count = 0;
    int i = 0, j = 0, ps = players.size(), ts = trainers.size();
    while (i < ps && j < ts) {
      if (players[i] <= trainers[j]) {
        i++;
        count++;
      }
      j++;
    }
    return count;
  }
};

int main() {
  vector<int> players = {4, 7, 9}, trainers = {8, 2, 5, 8};
  Solution sol;
  int ans = sol.matchPlayersAndTrainers(players, trainers);
  cout << ans;
}
