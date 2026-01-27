/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start
class Solution {
public:
  int majorityElement(vector<int> &nums) {
    int can = 0;
    int con = 0;

    for (int num : nums) {
      if (con == 0) {
        can = num;
      }

      if (num == can) {
        con++;
      } else {
        con--;
      }
    }

    return can;
  }
};
// @lc code=end
