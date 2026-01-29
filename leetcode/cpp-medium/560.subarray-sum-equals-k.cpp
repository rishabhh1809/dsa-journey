/*
 * @lc app=leetcode id=560 lang=cpp
 *
 * [560] Subarray Sum Equals K
 */

// @lc code=start
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        int total = 0;
        int count = 0;

        m[0] = 1;

        for (int n : nums)  {
            total += n;
            int target = total - k;

            if (m.contains(target)){
                count += m[target];
            }
            
            m[total]++;
        }
        return count;
    }
};
// @lc code=end

