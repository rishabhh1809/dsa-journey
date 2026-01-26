/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */

// @lc code=start
class Solution {
public:
  bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
      return false;
    }

    unordered_map<char, int> freq;

    for (char c : s) {
      freq[c] += 1;
    }
    for (char c : t) {
      if (--freq[c] < 0) {
        return false;
      }
    }
    return true;
  }
};
// @lc code=end
