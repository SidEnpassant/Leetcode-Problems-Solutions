class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int min = min_element(prices.begin(), prices.end());
        int buyPrice = prices[0];
        int profit = 0;
        int n = prices.size();
        for(int i = 0 ; i < n ; i++){
            if(buyPrice > prices[i]){
                buyPrice = prices[i];
            }
            profit = max(profit , prices[i] - buyPrice);
        }
        return profit;
    }
};