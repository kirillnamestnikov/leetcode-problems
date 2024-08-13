class Solution {
public:
    int uniquePaths(int m, int n) {
        std::vector< int > ans(n, 1);
        for (int i = 1; i < m; ++i)
        {
            std::vector< int > curr(n, 1);
            for (int j = 1; j < n; ++j)
            {
                curr[j] = curr[j - 1] + ans[j];
            }
            ans = curr;
        }
        return ans[n - 1];
    }
};
