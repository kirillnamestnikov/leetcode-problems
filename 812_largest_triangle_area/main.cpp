class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double res = 0.0;
        for (const auto & i: points)
        {
            for (const auto & j: points)
            {
                for (const auto & k: points)
                {
                    res = std::max(res, 0.5 * std::abs(i[0] * j[1] + j[0] * k[1] + k[0] * i[1] - k[0] * j[1] - j[0] * i[1] - i[0] * k[1]));
                }
            }
        }
        return res;
    }
};
