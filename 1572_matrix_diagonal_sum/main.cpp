class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int res = 0;
        size_t size = mat.size();
        for (size_t i = 0; i < size; ++i)
        {
            for (size_t j = 0; j < size; ++j)
            {
                if ((i == j) || (i + j + 1 == size))
                {
                    res += mat[i][j];
                }
            }
        }
        return res;
    }
};
