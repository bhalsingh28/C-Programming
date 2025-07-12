// https://neetcode.io/problems/two-integer-sum-ii?list=neetcode150

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    int high = numbers.size() - 1, low = 0;
    while (low < high) {
      if (numbers[low] + numbers[high] == target)
        return {low + 1, high + 1};
      else if (numbers[low] + numbers[high] > target)
        high--;
      else
        low++;
    }
    return {};
  }
};

int main() {
  vector<int> numbers = {1, 2, 3, 4};
  int target = 3;
  Solution sol;
  vector<int> vec = sol.twoSum(numbers, target);
  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << "  ";
  }
}
