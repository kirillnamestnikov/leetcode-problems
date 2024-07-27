#include <numeric>

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int a = std::numeric_limits< int >::max();
        std::vector< std::vector< int > > res(n, std::vector< int >(n, a));
        for (size_t i = 0; i < n; ++i)
        {
            res[0][i] = matrix[0][i];
        }
        for (size_t i = 1; i < n; ++i)
        {
            for (size_t j = 0; j < n; ++j)
            {
                if (j == 0)
                {
                    res[i][j] = std::min(res[i - 1][j], res[i - 1] [j + 1]) + matrix[i][j];
                }
                else if (j == n - 1)
                {
                    res[i][j] = std::min(res[i - 1][j], res[i - 1][j - 1]) + matrix[i][j];
                }
                else
                {
                    res[i][j] = std::min({res[i - 1][j], res[i - 1][j - 1], res[i - 1][j + 1]}) + matrix[i][j];
                }
            }
        }
        for (size_t j = 0; j < n; ++j)
        {
            a = std::min(a, res[n - 1][j]);
        }
        return a;
    }
};
