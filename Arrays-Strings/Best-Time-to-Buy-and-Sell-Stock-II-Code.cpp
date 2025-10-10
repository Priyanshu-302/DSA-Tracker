class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size(), best_buy = prices[0];
        int total_profit = 0;

        for (int i = 1; i < n; i++) {
            if (best_buy < prices[i]) {
                total_profit += prices[i] - best_buy;
                best_buy = prices[i];
            }
            else {
                best_buy = min(best_buy, prices[i]);
            }
        }

        return total_profit;
    }
};
