// https : // leetcode.com/problems/3sum/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    unordered_set<string> seenTriplets;
    unordered_set<int> hashset;
    vector<vector<int>> res;
    int n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 0; i < n - 2; ++i) {
      class Solution {
      public:
        vector<vector<int>> threeSum(vector<int> &nums) {
          vector<vector<int>> vec;
          unordered_map<int, int> mp;
          for (int i = 0; i < nums.size(); i++)
            mp[nums[i]] = 1;
          for (int i = 0; i < nums.size() - 2; i++) {
            int target = -nums[i];
            for (int j = i + 1; j < nums.size() - 1; j++) {
              int temp = target - nums[j];
              if (mp.find(temp) != mp.end() && nums[i] != nums[j] &&
                  temp != nums[i]) {
                vec.push_back({nums[i], nums[j], temp});
              }
            }
          }
          return vec;
        }
      };

      if (i > 0 && nums[i] == nums[i - 1])
        continue;
      hashset.clear();
      for (int j = i + 1; j < n; ++j) {
        int complement = -nums[i] - nums[j];
        if (hashset.count(complement)) {
          vector<int> triplet = {nums[i], complement, nums[j]};
          sort(triplet.begin(), triplet.end());
          string key = to_string(triplet[0]) + "," + to_string(triplet[1]) +
                       "," + to_string(triplet[2]);
          if (!seenTriplets.count(key)) {
            seenTriplets.insert(key);
            res.push_back(triplet);
          }
        }
        hashset.insert(nums[j]);
      }
    }
    return res;
  }
};

int main() {
  Solution sol;
  vector<int> nums = {-1, 0, 1, 2, -1, -4};
  vector<vector<int>> vec = sol.threeSum(nums);
  for (int i = 0; i < vec.size(); ++i) {
    for (int j = 0; j < vec[i].size(); ++j) {
      cout << vec[i][j] << " ";
    }
    cout << endl;
  }
}
