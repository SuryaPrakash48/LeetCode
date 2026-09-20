class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int diff=0;
        int buy=prices[0];
        for (int i=1; i<prices.size(); i++) {
            int sell=prices[i];
            diff=sell-buy;
            profit=max(profit, diff);
            if (diff<0) {
                buy=prices[i];
            }
            
        }
        return profit;
    }
};