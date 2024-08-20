#include <numeric>

class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        size_t negativeCount = 0;
        int minEl = std::numeric_limits< int >::max();
        size_t size = matrix.size();
        for (size_t i = 0; i < size; ++i)
        {
            for (size_t j = 0; j < size; ++j)
            {
                sum += std::abs(matrix[i][j]);
                if (matrix[i][j] < 0)
                {
                    ++negativeCount;
                }
                minEl = std::min(minEl, std::abs(matrix[i][j]));
            }
        }
        if (negativeCount % 2 == 0)
        {
            return sum;
        }
        else
        {
            return sum - 2 * minEl;
        }
    }
};
