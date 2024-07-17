class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        std::vector< std::vector< int > > res;
        size_t length = matrix[0].size();
        size_t height = matrix.size();
        for (size_t j = 0; j < length; ++j)
        {
            std::vector< int > temp;
            for (size_t i = 0; i < height; ++i)
            {
                temp.push_back(matrix[i][j]);
            }
            res.push_back(temp);
        }
        return res;
    }
};
