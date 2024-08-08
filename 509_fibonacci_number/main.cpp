class Solution {
public:
    int fib(int n) {
        if (n == 0)
        {
            return 0;
        }
        if (n == 1)
        {
            return 1;
        }
        std::vector< int > dp(n + 1, 0);
        dp[1] = 1;
        for (size_t i = 2; i <= n; ++i)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
};
