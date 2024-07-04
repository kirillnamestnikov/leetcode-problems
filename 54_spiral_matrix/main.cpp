class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if ((matrix.empty()) || (matrix[0].empty()))
        {
            return {};
        }
        size_t m = matrix.size();
        size_t n = matrix[0].size();
        std::vector< int > ans;
        ans.reserve(m * n);
        int right1 = 0;
        int right2 = n - 1;
        int height1 = 0;
        int height2 = m - 1;
        while ((right1 <= right2) && (height1 <= height2))
        {
            for (int i = right1; i <= right2; ++i)
            {
                ans.push_back(matrix[height1][i]);
            }
            if (++height1 > height2)
            {
                break;
            }
            for (int i = height1; i <= height2; ++i)
            {
                ans.push_back(matrix[i][right2]);
            }
            if (--right2 < right1)
            {
                break;
            }
            for (int i = right2; i >= right1; --i)
            {
                ans.push_back(matrix[height2][i]);
            }
            if (--height2 < height1)
            {
                break;
            }
            for (int i = height2; i >= height1; --i)
            {
                ans.push_back(matrix[i][right1]);
            }
            if (++right1 > right2)
            {
                break;
            }
        }
        return ans;

    }
};
