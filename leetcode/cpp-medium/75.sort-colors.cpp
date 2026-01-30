/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int arr[3];

        for (int n : nums) {
            arr[n]++;
        }
        nums.clear();
        nums.insert(nums.end(), arr[0], 0);
        nums.insert(nums.end(), arr[1], 1);
        nums.insert(nums.end(), arr[2], 2);
    }
};
// @lc code=end

