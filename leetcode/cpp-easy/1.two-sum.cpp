/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> m;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
      int x = nums[i];
      int needed = target - x;

      if (m.contains(needed)) {
        vector<int> v = {m[needed], i};
        return v;
      }

      m[x] = i;
    }

    return {};
  }
};
// @lc code=end
