/*
 * @lc app=leetcode id=122 lang=cpp
 *
 * [122] Best Time to Buy and Sell Stock II
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int n = prices.size();

        for (int i = 0, j = 1; j < n; i++, j++)    {
            int a = prices[i];

            if (prices[j] > a)  {
                int b = 0;

                while (prices[j]>b) {
                    b = prices[j];
                    if (j == (n-1))
                        break;
                    j++;
                    i++;
                }

                profit += (b-a);
            }
        }

        return profit;
    }
};
// @lc code=end

