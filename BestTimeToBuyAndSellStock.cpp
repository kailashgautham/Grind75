class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int sell = 0;
        int length = prices.size();
        for (int i = 1; i < length; i++) {
            if (prices[i] - buy > sell) sell = prices[i] - buy;
            if (prices[i] < buy) buy = prices[i];
        }
        return sell;
    }
};