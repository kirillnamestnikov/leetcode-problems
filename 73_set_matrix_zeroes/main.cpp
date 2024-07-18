class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        std::vector< std::vector< int > > temp = matrix;
        int width = matrix[0].size();
        int height = matrix.size();
        for (int i = 0; i < height; ++i)
        {
            for (int j = 0; j < width; ++j)
            {
                if (matrix[i][j] == 0)
                {
                    for (int k = 0; k < width; ++k)
                    {
                        temp[i][k] = 0;
                    }
                }
            }
        }
        for (int i = 0; i < height; ++i)
        {
            for (int j = 0; j < width; ++j)
            {
                if (matrix[i][j] == 0)
                {
                    for (int k = 0; k < height; ++k)
                    {
                        temp[k][j] = 0;
                    }
                }
            }
        }
        for (int i = 0; i < height; ++i)
        {
            for (int j = 0; j < width; ++j)
            {
                matrix[i][j] = temp[i][j];
            }
        }
    }
};
