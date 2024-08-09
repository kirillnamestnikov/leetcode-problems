class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int height = board.size();
        int width = board[0].size();
        std::vector< std::vector< int > > ans(height, std::vector< int >(width, 0));
        for (int i = 0; i < height; ++i)
        {
            for (int j = 0; j < width; ++j)
            {
                int a = ((i - 1 >= 0) && (j - 1 >= 0)) ? board[i - 1][j - 1] : 0;
                int b = ((i + 1 < height) && (j - 1 >= 0)) ? board[i + 1][j - 1] : 0;
                int c = ((i - 1 >= 0) && (j + 1 < width)) ? board[i - 1][j + 1] : 0;
                int d = ((i + 1 < height) && (j + 1 < width)) ? board[i + 1][j + 1] : 0;
                int e = (i - 1 >= 0) ? board[i - 1][j] : 0;
                int f = (i + 1 < height) ? board[i + 1][j] : 0;
                int g = (j - 1 >= 0) ? board[i][j - 1] : 0;
                int h = (j + 1 < width) ? board[i][j + 1] : 0;
                int sum = a + b + c + d + e + f + g + h;
                if (board[i][j] == 1)
                {
                    if ((sum == 2) || (sum == 3))
                    {
                        ans[i][j] = 1;
                    }
                    else
                    {
                        ans[i][j] = 0;
                    }
                }
                else
                {
                    if (sum == 3)
                    {
                        ans[i][j] = 1;
                    }
                    else
                    {
                        ans[i][j] = 0;
                    }
                }
            }
        }
        board = ans;
    }
};
