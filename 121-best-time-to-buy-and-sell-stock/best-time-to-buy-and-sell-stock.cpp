class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int bestProfit = 0;

        for (int price : prices) {
            bestProfit = max(bestProfit, price - minPrice);
            minPrice = min(minPrice, price);
        }

        return bestProfit;
    }
};