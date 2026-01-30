/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
 */

// @lc code=start
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n, 1);

        for (int i = 1, last = 1; i < n; i++) {
            last *= nums[i - 1];
            v[i] *= last;
        }

        for (int i = n - 2, last = 1; i >= 0; i--) {
            last *= nums[i + 1];
            v[i] *= last;
        }

        return v;
    }
};
// @lc code=end

