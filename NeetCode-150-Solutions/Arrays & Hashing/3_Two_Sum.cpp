//  https://leetcode.com/problems/two-sum/description/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
      int temp = target - nums[i];
      if (mp.find(temp) != mp.end()) {
        return {mp[temp], i};
      }
      mp[nums[i]] = i;
    }
    return {};
  }
};

int main() {
  vector<int> nums = {2, 7, 11, 15};
  int target = 9;
  Solution obj;
  vector<int> vec = obj.twoSum(nums, target);
  cout << vec[0] << "  " << vec[1];
}
