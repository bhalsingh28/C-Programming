// https://leetcode.com/problems/valid-anagram/description/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
  bool isAnagram(string s, string t) {
    if (s.size() != t.size())
      return false;
    unordered_map<char, int> mp;
    for (int i = 0; i < s.size(); ++i) {
      mp[s[i]]++;
      mp[t[i]]--;
    }
    for (auto i : mp) {
      if (i.second != 0)
        return false;
    }
    return true;
  }
};

int main() {
  string s = "anagram", t = "nagaram";
  Solution obj;
  bool ans = obj.isAnagram(s, t);
  cout << ans;
}
