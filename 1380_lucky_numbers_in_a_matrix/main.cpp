class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        std::vector< std::vector< int > > transposedMatrix;
        for (int j = 0; j < n; ++j)
        {
            std::vector< int > temp;
            for (int i = 0; i < m; ++i)
            {
                temp.push_back(matrix[i][j]);
            }
            transposedMatrix.push_back(temp);
        }
        std::vector< int > res;
        res.reserve(m + n);
        for (int i = 0; i < m; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if ((*std::min_element(matrix[i].begin(), matrix[i].end()) == matrix[i][j]) && (*std::max_element(transposedMatrix[j].begin(), transposedMatrix[j].end()) == matrix[i][j]))
                {
                    res.push_back(matrix[i][j]);
                }
            }
        }
        return res;
    }
};
