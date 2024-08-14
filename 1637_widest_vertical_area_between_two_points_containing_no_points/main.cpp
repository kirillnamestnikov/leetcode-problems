class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        int size = points.size();
        std::sort(points.begin(), points.end());
        int res = 0;
        for (int i = 1; i < size; ++i)
        {
            int curr = points[i][0] - points[i - 1][0];
            res = std::max(res, curr);
        }
        return res;
    }
};
