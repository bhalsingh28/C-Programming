// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/?envType=daily-question&envId=2025-07-14

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
  int binaryToDecimal(vector<int> &digits) {
    string str = "";
    int num = 0;
    int n = digits.size();
    for (int i = 0; i < n; i++) {
      if (digits[i] == 0)
        str += "0";
      else
        num += pow(2, (n - 1 - i));
    }
    return num;
  }

  int getDecimalValue(ListNode *head) {
    if (!head || head->next == nullptr)
      return head->val;
    vector<int> digits;
    while (head != nullptr) {
      digits.push_back(head->val);
      head = head->next;
    }
    return binaryToDecimal(digits);
  }
};

/**

  class Solution {
  public:
    int getDecimalValue(ListNode *head) {
      if (!head || head->next == nullptr)
        return head->val;
      int num = 0;
      while (head != nullptr) {
        num = (num << 1) | head->val;
        head = head->next;
      }
      return num;
    }
  };
*/

int main() {

  ListNode *head = new ListNode(1);
  head->next = new ListNode(0);
  head->next->next = new ListNode(1);
  head->next->next->next = new ListNode(1);

  Solution sol;
  int decimalValue = sol.getDecimalValue(head);

  cout << "Decimal value: " << decimalValue << endl; // Output: 11

  ListNode *temp;
  while (head != nullptr) {
    temp = head;
    head = head->next;
    delete temp;
  }
  return 0;
}
