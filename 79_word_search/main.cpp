class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int height = board.size();
        int width = board[0].size();
        for (int i = 0; i < height; ++i)
        {
            for (int j = 0; j < width; ++j)
            {
                int k = 0;
                if (dfs(board, word, i, j, k))
                {
                    return true;
                }
            }
        }
        return false;
    }
private:
    bool dfs(std::vector< std::vector< char > > & grid, const std::string & word, int i, int j, int k)
    {
        if (k == word.size())
        {
            return true;
        }
        if ((i < 0) || (i >= grid.size()) || (j < 0) || (j >= grid[0].size()) || (grid[i][j] != word[k]))
        {
            return false;
        }
        char temp = grid[i][j];
        grid[i][j] = 0;
        if (dfs(grid, word, i + 1, j, k + 1) || dfs(grid, word, i - 1, j, k + 1) || dfs(grid, word, i, j + 1, k + 1) || dfs(grid, word, i, j - 1, k + 1))
        {
            return true;
        }
        grid[i][j] = temp;
        return false;
    }
};
