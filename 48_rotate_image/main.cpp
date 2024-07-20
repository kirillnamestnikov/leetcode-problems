class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        size_t n = matrix.size();
        size_t m = matrix[0].size();
        for (size_t i = 0; i < n; ++i)
        {
            for (size_t j = 0; j < i; ++j)
            {
                std::swap(matrix[i][j], matrix[j][i]);
            }
        }
        for (size_t i = 0; i < n; ++i)
        {
            std::reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
