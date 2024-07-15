class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int height = grid.size();
        int width = grid[0].size();
        int perimeter = 0;
        for (int i = 0; i < height; ++i)
        {
            for (int j = 0; j < width; ++j)
            {
                if (grid[i][j])
                {
                    if ((i == 0) || (grid[i - 1][j] == 0))
                    {
                        ++perimeter;
                    }
                    if ((i == height - 1) || (grid[i + 1][j] == 0))
                    {
                        ++perimeter;
                    }
                    if ((j == 0) || (grid[i][j - 1] == 0))
                    {
                        ++perimeter;
                    }
                    if ((j == width - 1) || (grid[i][j + 1] == 0))
                    {
                        ++perimeter;
                    }
                }
            }
        }
        return perimeter;
    }
};
