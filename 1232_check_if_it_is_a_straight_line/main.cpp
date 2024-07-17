class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        size_t pointsCount = coordinates.size();
        int dx = coordinates[1][0] - coordinates[0][0];
        int dy = coordinates[1][1] - coordinates[0][1];
        for (size_t i = 1; i < pointsCount - 1; ++i)
        {
            int dx1 = coordinates[i][0] - coordinates[i - 1][0];
            int dy1 = coordinates[i][1] - coordinates[i - 1][1];
            int dx2 = coordinates[i + 1][0] - coordinates[i][0];
            int dy2 = coordinates[i + 1][1] - coordinates[i][1];
            if (dx1 * dy2 != dx2 * dy1)
            {
                return false;
            }
        }
        return true;
    }
};
