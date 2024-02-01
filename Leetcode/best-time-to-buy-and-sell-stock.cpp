class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n==1) return 0;

        int profit = 0, min = INT_MAX;
        for(int i=0; i < n; i++){
            if(prices[i] < min){
                min = prices[i];
                continue;
            }

            profit = max(profit, prices[i] - min);
        }

        return profit;
    }
};