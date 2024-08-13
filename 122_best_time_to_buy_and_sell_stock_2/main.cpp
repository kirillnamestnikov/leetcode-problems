class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int res = 0;
        for (size_t i = 1; i < prices.size(); ++i)
        {
            if (prices[i] > minPrice)
            {
                res += prices[i] - minPrice;
            }
            minPrice = prices[i];
        }
        return res;
    }
};
