// https://leetcode.com/problems/longest-consecutive-sequence/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> mp{nums.begin(), nums.end()};
        int count = 0;
        for (auto i : mp)
        {
            if (mp.contains(i - 1))
                continue;
            int len = 1;
            while (mp.contains(++i))
                len++;
            count = max(count, len);
        }
        return count;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {0, 3, 7, 2, 5, 8, 4, 6, 0, 1};
    int ans = obj.longestConsecutive(nums);
    cout << ans;
}