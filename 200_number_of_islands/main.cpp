class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if (grid.empty())
        {
            return 0;
        }
        int res = 0;
        size_t height = grid.size();
        size_t width = grid[0].size();
        for (size_t i = 0; i < height; ++i)
        {
            for (size_t j = 0; j < width; ++j)
            {
                if (grid[i][j] == '1')
                {
                    ++res;
                    dfs(grid, i, j);
                }
            }
        }
        return res;
    }
private:
    void dfs(std::vector< std::vector< char > > & grid, int i, int j)
    {
        if ((i < 0) || (i >= grid.size()) || (j < 0) || (j >= grid[0].size()) || grid[i][j] != '1')
        {
            return;
        }
        grid[i][j] = '0';
        dfs(grid, i + 1, j);
        dfs(grid, i - 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);
    }
};
