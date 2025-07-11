
// https://leetcode.com/problems/product-of-array-except-self/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    int n = nums.size();
    vector<int> product(n, 1);

    int temp = 1;
    for (int i = 0; i < n; ++i) {
      product[i] = temp;
      temp *= nums[i];
    }

    temp = 1;
    for (int i = n - 1; i >= 0; --i) {
      product[i] *= temp;
      temp *= nums[i];
    }
    return product;
  }
};

void printVector(const vector<int> &vec) {
  for (int num : vec)
    cout << num << " ";
  cout << endl;
}

int main() {
  Solution sol;

  vector<int> test1 = {1, 2, 3, 4};
  vector<int> result1 = sol.productExceptSelf(test1);
  printVector(result1); // Expected: [24, 12, 8, 6]

  vector<int> test2 = {-1, 1, 0, -3, 3};
  vector<int> result2 = sol.productExceptSelf(test2);
  printVector(result2); // Expected: [0, 0, 9, 0, 0]
  return 0;
}
