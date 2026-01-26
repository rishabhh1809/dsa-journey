/*
 * @lc app=leetcode id=49 lang=cpp
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    unordered_map<string, int> track;
    vector<vector<string>> ans;

    for (int i = 0, j = 0; i < strs.size(); i++) {
      string s = strs[i];
      string sorted_s = s;
      sort(sorted_s.begin(), sorted_s.end());

      auto pos = track.find(sorted_s);

      if (pos != track.end()) {
        ans[pos->second].push_back(s);
      } else {
        track[sorted_s] = j;
        ans.push_back({s});
        j++;
      }
    }

    return ans;
  }
};
// @lc code=end
