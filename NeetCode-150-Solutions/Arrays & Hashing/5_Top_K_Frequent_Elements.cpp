// https://leetcode.com/problems/top-k-frequent-elements/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
  vector<int> topKFrequent(vector<int> &nums, int k) {
    unordered_map<int, int> mp;
    vector<pair<int, int>> myVec;
    vector<int> ans;
    for (int i = 0; i < nums.size(); ++i)
      mp[nums[i]]++;
    for (auto i : mp)
      myVec.push_back({i.second, i.first});
    sort(myVec.begin(), myVec.end());
    int i = myVec.size() - 1;
    while (k--) {
      ans.push_back(myVec[i].second);
      i--;
    }
    return ans;
  }
};

int main() {
  Solution sol;

  vector<int> nums1 = {1, 1, 1, 2, 2, 3};
  int k1 = 2;

  vector<int> result1 = sol.topKFrequent(nums1, k1);
  cout << "Top " << k1 << " frequent elements: ";
  for (int num : result1)
    cout << num << " ";
  cout << endl;

  vector<int> nums2 = {1};
  int k2 = 1;

  vector<int> result2 = sol.topKFrequent(nums2, k2);
  cout << "Top " << k2 << " frequent elements: ";
  for (int num : result2)
    cout << num << " ";
  cout << endl;

  return 0;
}
