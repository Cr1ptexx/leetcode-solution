class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min = 10001 , maxDiff = 0;
        for(int i = 0 ; i < prices.size() ; i++){
            if(prices[i] < min){
                min = prices[i];
            }else continue;
            for(int j = i+1 ; j < prices.size() ; j++){
                if(prices[j]-prices[i] > maxDiff){
                    maxDiff = prices[j]-prices[i];
                }
            }
        }
        return maxDiff;
    }
};