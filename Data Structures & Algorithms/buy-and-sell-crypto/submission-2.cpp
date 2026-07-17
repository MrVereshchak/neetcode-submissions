class Solution {
public:
    int maxProfit(vector<int> &prices) {
        size_t l = 0;
        size_t r = 0;
        int maxProfit = 0;

        while (r < prices.size()) {
            maxProfit = max(maxProfit, prices[r] - prices[l]);

            if (prices[r] < prices[l]) {
                l = r;
            }

            ++r;
        }

        return maxProfit;
    }
};
