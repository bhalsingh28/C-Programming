// https://leetcode.com/problems/group-anagrams/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

/*
class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    vector<vector<string>> Anagrams;
    int size = strs.size();
    if (size == 0)
      return Anagrams;
    map<map<char, int>, vector<string>> mp;
    map<char, int> mp1;
    for (int i = 0; i < size; ++i) {
      for (int k = 0; k < strs[i].size(); ++k) {
        mp1[strs[i][k]]++;
      }
      mp[mp1].push_back(strs[i]);
      mp1.clear();
    }
    for (auto i : mp) {
      Anagrams.push_back(i.second);
    }
    return Anagrams;
  }
};
*/

class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    vector<vector<string>> vec;
    unordered_map<string, vector<string>> mp;
    for (string s : strs) {
      string t = s;
      sort(t.begin(), t.end());
      mp[t].push_back(s);
    }
    for (auto p : mp) {
      vec.push_back(p.second);
    }
    return vec;
  }
};

int main() {
  Solution sol;
  vector<string> input = {"eat", "tea", "tan", "ate", "nat", "bat"};

  vector<vector<string>> output = sol.groupAnagrams(input);

  cout << "Grouped Anagrams:\n";
  for (const auto &group : output) {
    cout << "[ ";
    for (const auto &word : group) {
      cout << word << " ";
    }
    cout << "]\n";
  }

  return 0;
}
