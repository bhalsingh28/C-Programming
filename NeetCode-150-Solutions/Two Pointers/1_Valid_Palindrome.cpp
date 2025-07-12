// https://leetcode.com/problems/valid-palindrome/description/

#include <bits/stdc++.h>
#include <iostream>
using namespace std

    class Solution
{
public:
  bool isPalindrome(string s)
  {
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
      if (!isalnum(s[i]))
        i++;
      else if (!isalnum(s[j]))
        j--;
      else if (tolower(s[i]) != tolower(s[j]))
      {
        return false;
      }
      else
      {
        i++;
        j--;
      }
    }
    return true;
  }
};

int main()
{
  Solution obj;
  string s = "A man, a plan, a canal: Panama";
  bool ans = isPalindrome(s);
  cout << ans;
}
