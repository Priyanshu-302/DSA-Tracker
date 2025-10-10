class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0, best_buy = prices[0];
        int n = prices.size();

        for (int i = 1; i < n; i++) {
            if (best_buy < prices[i]) {
                max_profit = max(max_profit, prices[i] - best_buy);
            }
            else {
                best_buy = prices[i];
            }
        }

        return max_profit;
    }
};
