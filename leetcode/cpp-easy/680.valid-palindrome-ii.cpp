/*
 * @lc app=leetcode id=680 lang=cpp
 *
 * [680] Valid Palindrome II
 */

// @lc code=start
class Solution {
public:
    bool validPalindrome(string s) {
        while (i < j) {
            if (s[i] != s[j]) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;

        while (i < j) {
            if (s[i] != s[j]) {
                return isStrictPalindrome(s, i + 1, j) || isStrictPalindrome(s, i, j - 1);
            }
            i++;
            j--;
        }

        return true;
    }
};
// @lc code=end

