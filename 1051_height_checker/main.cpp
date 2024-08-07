class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int res = 0;
        std::vector< int > expected(heights.begin(), heights.end());
        std::sort(expected.begin(), expected.end());
        for (size_t i = 0; i < heights.size(); ++i)
        {
            if (expected[i] != heights[i])
            {
                ++res;
            }
        }
        return res;
    }
};
