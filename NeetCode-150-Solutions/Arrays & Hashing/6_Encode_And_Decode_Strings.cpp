// https://neetcode.io/problems/string-encode-and-decode

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
  string encode(vector<string> &strs)
  {
    string result;
    for (string &s : strs)
    {
      result += to_string(s.length()) + "#" + s;
    }
    return result;
  }

  vector<string> decode(string s)
  {
    vector<string> result;
    int i = 0;
    while (i < s.size())
    {
      int j = i;
      while (s[j] != '#')
        j++;
      int len = stoi(s.substr(i, j - i));
      result.push_back(s.substr(j + 1, len));
      i = j + 1 + len;
    }
    return result;
  }
};

int main()
{
  Solution sol;

  vector<string> input1 = {"neet", "code", "love", "you"};
  string encoded1 = sol.encode(input1);
  vector<string> decoded1 = sol.decode(encoded1);

  cout << "Test Case 1:\nEncoded: " << encoded1 << "\nDecoded: ";
  for (const string &str : decoded1)
    cout << str << " ";
  cout << "\n";

  vector<string> input2 = {"hello", "world", "", "!"};
  string encoded2 = sol.encode(input2);
  vector<string> decoded2 = sol.decode(encoded2);

  cout << "Test Case 2:\nEncoded: " << encoded2 << "\nDecoded: ";
  for (const string &str : decoded2)
    cout << str << " ";
  cout << "\n";

  return 0;
}
