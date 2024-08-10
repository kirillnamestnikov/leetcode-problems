class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        if (n == 0)
        {
            return {};
        }
        size_t m = n;
        std::vector< std::vector< int > > matrix(m, std::vector< int >(m, 0));
        std::vector< int > vec;
        vec.reserve(n);
        for (size_t i = 1; i <= n; ++i)
        {
            vec.push_back(i);
        }
        int right1 = 0;
        int right2 = m - 1;
        int height1 = 0;
        int height2 = m - 1;
        int num = 1;
        while ((right1 <= right2) && (height1 <= height2))
        {
            for (int i = right1; i <= right2; ++i)
            {
                matrix[height1][i] = num++;
            }
            ++height1;
            for (int i = height1; i <= height2; ++i)
            {
                matrix[i][right2] = num++;
            }
            --right2;
            if (height1 <= height2)
            {
                for (int i = right2; i >= right1; --i)
                {
                    matrix[height2][i] = num++;
                }
                --height2;
            }
            if (right1 <= right2)
            {
                for (int i = height2; i >= height1; --i)
                {
                    matrix[i][right1] = num++;
                }
                ++right1;
            }
        }
        return matrix;
    }
};
