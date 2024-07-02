class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int row = triangle.size();
        std::vector< int > results = triangle[row - 1];
        for (int k = row - 2; k >= 0; --k)
        {
            for (int i = 0; i < k + 1; ++i)
            {
                results[i] = std::min(results[i], results[i + 1]) + triangle[k][i];
            }
        }
        return results[0];
    }
};
