// https://leetcode.com/problems/valid-word/description/?envType=daily-question&envId=2025-07-15

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
  bool isValid(string word) {
    if (word.size() < 3)
      return false;
    int vowel = 0, cons = 0;
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i = 0; i < word.size(); i++) {
      char ch = word[i];
      int asch = ch;
      if ((asch >= 48 && asch <= 57) || (asch >= 65 && asch <= 90) ||
          (asch >= 97 && asch <= 122)) {
        bool temp = false;
        for (int j = 0; j < 10; j++) {
          if (vowels[j] == ch) {
            vowel++;
            temp = true;
          }
        }
        if (!temp &&
            ((asch >= 65 && asch <= 90) || (asch >= 97 && asch <= 122)))
          cons++;
      } else {
        return false;
      }
    }
    if (vowel == 0 || cons == 0)
      return false;
    return true;
  }
};

int main() {
  Solution sol;
  bool ans = sol.isValid("234Adas");
  if (ans)
    cout << "True";
  else
    cout << "False";
}
