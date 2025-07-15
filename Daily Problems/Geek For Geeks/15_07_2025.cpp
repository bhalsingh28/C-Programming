// https://www.geeksforgeeks.org/problems/divisible-by-13/1

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution {
public:
  bool divby13(string &s) {
    int rem = 0;
    for (char ch : s) {
      int digit = ch - '0';
      rem = (rem * 10 + digit) % 13;
    }
    return rem == 0;
  }
};

int main() {
  string str = "2911285";
  Solution sol;
  bool ans = sol.divby13(str);
  if (ans)
    cout << "Yes Divisible by 13";
  else
    cout << "Not Divisible by 13";
}
