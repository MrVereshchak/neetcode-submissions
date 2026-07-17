class Solution {
public:
    int maxProfit(vector<int> &prices) {
        size_t buy = 0, sell = 0;
        int maxProfit = 0;

        for (; sell < prices.size(); ++sell) {
            if (prices[sell] < prices[buy]) {
                buy = sell;
            } else {
                maxProfit = max(maxProfit, prices[sell] - prices[buy]);
            }
        }

        return maxProfit;
    }
};
