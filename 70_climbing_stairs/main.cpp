class Solution {
public:
    int climbStairs(int n) {
        if ((n == 0) || (n == 1))
        {
            return 1;
        }
        std::vector< int > vec(n + 1, 1);
        for (size_t i = 2; i <= n; ++i)
        {
            vec[i] = vec[i - 1] + vec[i - 2];
        }
        return vec[n];
    }
};
