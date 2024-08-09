class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int res = 0;
        int height = grid.size();
        int width = grid[0].size();
        for (int i = 0; i < height; ++i)
        {
            for (int j = 0; j < width; ++j)
            {
                if ((checkSum(grid, i, j)) && checkNums(grid, i, j))
                {
                    ++res;
                }
            }
        }
        return res;
    }
private:
    bool checkSum(std::vector< std::vector< int > > & matrix, int i, int j)
    {
        if ((i + 2 >= matrix.size()) || (j + 2 >= matrix[0].size()))
        {
            return false;
        }
        bool check = true;
        int sum = matrix[i][j] + matrix[i][j + 1] + matrix[i][j + 2];
        check = check && (sum == matrix[i][j] + matrix[i + 1][j] + matrix[i + 2][j]);
        check = check && (sum == matrix[i + 2][j] + matrix[i + 2][j + 1] + matrix[i + 2][j + 2]);
        check = check && (sum == matrix[i][j + 2] + matrix[i + 1][j + 2] + matrix[i + 2][j + 2]);
        check = check && (sum == matrix[i][j + 1] + matrix[i + 1][j + 1] + matrix[i + 2][j + 1]);
        check = check && (sum == matrix[i + 1][j] + matrix[i + 1][j + 1] + matrix[i + 1][j + 2]);
        check = check && (sum == matrix[i][j] + matrix[i + 1][j + 1] + matrix[i + 2][j + 2]);
        check = check && (sum == matrix[i + 2][j] + matrix[i + 1][j + 1] + matrix[i][j + 2]);
        return check;
    }
    bool checkNums(std::vector< std::vector< int > > & matrix, int i, int j)
    {
        if ((i + 2 >= matrix.size()) || (j + 2 >= matrix[0].size()))
        {
            return false;
        }
        std::set< int > set({1, 2, 3, 4, 5, 6, 7, 8, 9});
        for (int r = 0; r < 3; ++r)
        {
            for (int c = 0; c < 3; ++c)
            {
                set.erase(matrix[i + r][j + c]);
            }
        }
        return set.empty();
    }
};
