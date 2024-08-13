#include <numeric>

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = std::numeric_limits< int >::max();
        int maxDiff = std::numeric_limits< int >::min();
        for (size_t i = 0; i < prices.size(); ++i)
        {
            minPrice = std::min(minPrice, prices[i]);
            maxDiff = std::max(maxDiff, prices[i] - minPrice);
        }
        return maxDiff;

    }
};
