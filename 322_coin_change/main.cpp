#include <numeric>

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dp[++amount];
        dp[0] = 0;
        std::sort(coins.begin(), coins.end());
        for (int i = 1; i < amount; ++i)
        {
            dp[i] = std::numeric_limits< int >::max();
            for (const auto & coin: coins)
            {
                if (i - coin < 0)
                {
                    break;
                }
                if (dp[i - coin] != std::numeric_limits< int >::max())
                {
                    dp[i] = std::min(dp[i], 1 + dp[i - coin]);
                }
            }
        }
        return (dp[--amount] == std::numeric_limits< int >::max()) ? -1 : dp[amount]; 
    }
};
