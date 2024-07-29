class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
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
                if (grid[i][j] == 1)
                {
                    int area = 0;
                    dfs(grid, i, j, area);
                    res = std::max(res, area);
                }
            }
        }
        return res;
    }
private:
    void dfs(std::vector< std::vector< int > > & grid, int i, int j, int & area)
    {
        if ((i < 0) || (i >= grid.size()) || (j < 0) || (j >= grid[0].size()) || (grid[i][j] != 1))
        {
            return;
        }
        ++area;
        grid[i][j] = 0;
        dfs(grid, i + 1, j, area);
        dfs(grid, i - 1, j, area);
        dfs(grid, i, j + 1, area);
        dfs(grid, i, j - 1, area);
    }
};
