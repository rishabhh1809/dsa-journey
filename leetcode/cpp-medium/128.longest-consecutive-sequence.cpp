/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int> &nums) {
        if (nums.empty())
            return 0;

        unordered_set<int> s;
        int longest = 0;

        s.reserve(nums.size());
        s.insert(nums.begin(), nums.end());

        for (int n : s) {
            if (s.find(n - 1) == s.end()) {
                int num = n;
                int streak = 1;

                while (s.find(num + 1) != s.end()) {
                    streak++;
                    num++;
                }

                longest = max(longest, streak);
            }
        }

        return longest;
    }
};
// @lc code=end
