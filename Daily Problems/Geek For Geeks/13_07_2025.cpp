// https://www.geeksforgeeks.org/problems/maximum-sum-of-elements-not-part-of-lis/1

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
  int nonLisMaxSum(vector<int> &arr) {
    int n = arr.size();
    vector<int> v, idx, parent(n, -1);

    for (int i = 0; i < n; ++i) {
      int pos = lower_bound(v.begin(), v.end(), arr[i]) - v.begin();
      if (pos == v.size()) {
        v.push_back(arr[i]);
        idx.push_back(i);
      } else {
        v[pos] = arr[i];
        idx[pos] = i;
      }
      if (pos > 0)
        parent[i] = idx[pos - 1];
    }

    int sum = accumulate(arr.begin(), arr.end(), 0), lisSum = 0;
    for (int i = idx.back(); i != -1; i = parent[i])
      lisSum += arr[i];

    return sum - lisSum;
  }
};

int main() {
  vector<int> arr = {5, 4, 3, 2, 1};
  Solution sol;
  cout << sol.nonLisMaxSum(arr) << endl; // Output: 14
}
