/*
 * @lc app=leetcode id=229 lang=cpp
 *
 * [229] Majority Element II
 */

// @lc code=start
class Solution {
public:
    vector<int> majorityElement(vector<int> &nums) {
        vector<int> result;
        int num1 = -1, num2 = -1;
        int count1 = 0, count2 = 0;

        for (int n : nums) {
            if (n == num1) {
                count1++;
            } else if (n == num2) {
                count2++;
            } else if (count1 == 0) {
                num1 = n;
                count1 = 1;
            } else if (count2 == 0) {
                num2 = n;
                count2 = 1;
            } else {
                count1--;
                count2--;
            }
        }

        count1 = 0;
        count2 = 0;
        for (int n : nums) {
            if (n == num1)
                count1++;
            else if (n == num2)
                count2++;
        }

        int limit = nums.size() / 3;
        if (count1 > limit)
            result.push_back(num1);
        if (count2 > limit)
            result.push_back(num2);

        return result;
    }
};
// @lc code=end
